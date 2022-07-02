#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mPlayer = new QMediaPlayer();
    mPlayList = new QMediaPlaylist();
    mPlayer->setPlaylist(mPlayList);
    ui->lineEdit->setReadOnly(true);
    mPlayer->setVolume(50);
    connect(ui->vs_volume, &QSlider::valueChanged,this,&MainWindow::changeVolume);
    connect(ui->bFind, &QPushButton::clicked,this,&MainWindow::FindSong);
    connect(ui->bPlay_2, &QPushButton::clicked,this,&MainWindow::Play);
    connect(ui->bForward,&QPushButton::clicked, mPlayList,&QMediaPlaylist::next);
    connect(ui->bBackward, &QPushButton::clicked, mPlayList, &QMediaPlaylist::previous);
    connect(mPlayer, &QMediaPlayer::currentMediaChanged,this, &MainWindow::CurrentMusicChanged);
    connect(ui->lw_list, &QListWidget::itemDoubleClicked,this, &MainWindow::changeTrack);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Play()
{
    mPlayer->play();
    ui->bPlay_2->setText("||");
    disconnect(ui->bPlay_2, &QPushButton::clicked,this,&MainWindow::Play);
    connect(ui->bPlay_2, &QPushButton::clicked,this,&MainWindow::Pause);
}

void MainWindow::Pause()
{
    mPlayer->pause();
    ui->bPlay_2->setText("|>");
    disconnect(ui->bPlay_2, &QPushButton::clicked,this,&MainWindow::Pause);
    connect(ui->bPlay_2, &QPushButton::clicked,this,&MainWindow::Play);
}

void MainWindow::FindSong()
{
    QDir dir = QFileDialog::getExistingDirectory(this,tr("Choose directory"));
    QStringList music = dir.entryList(QStringList() << "*.mp3",QDir::Files);
    foreach(QString song,music){
        mPlayList->addMedia(QUrl::fromLocalFile(dir.path()+"/"+song));
        ui->lineEdit->setText(song.remove(0, song.lastIndexOf('/')+1));
        ui->lw_list->addItem(song);
    }
    //QString song = QFileDialog::getOpenFileName(this, tr("Play Music"), QDir::homePath(),tr("music (*.mp3)"));
    //mPlayList->addMedia(QUrl::fromLocalFile(song));
    //song = song.remove(0, song.lastIndexOf('/')+1);
    //ui->lineEdit->setText(song);
    //ui->lw_list->addItem(song);
}

void MainWindow::CurrentMusicChanged(QMediaContent song)
{
    QString text = song.request().url().toString();
    ui->lineEdit->setText(text.remove(0,text.lastIndexOf('/')+1));
}

void MainWindow::changeVolume()
{
   int pos = ui->vs_volume->value();
   mPlayer->setVolume(pos);
}

void MainWindow::changeTrack()
{
    mPlayList->setCurrentIndex(ui->lw_list->currentRow());
    if(mPlayer->state() == QMediaPlayer::StoppedState || mPlayer->state() == QMediaPlayer::PausedState)
        MainWindow::Play();
}

