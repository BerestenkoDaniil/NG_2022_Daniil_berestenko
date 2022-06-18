#include <iostream>

using namespace std;


void drawLine(int size_1 = 0)
{
    for(int i = 0; i < size_1;i++){
        cout << "*";
    }

}


void drawFrame(int size_1)
{
    for(int i = 0;i < size_1;i++){
        if(i == 0 || i == size_1-1){
            cout << "*";
        }
        else
            cout << " ";
    }
}


void drawSquare(int size_1,int i)
{
    if(i == 0 || i == size_1-1){
            drawLine(size_1);
        }
    else
        drawFrame(size_1);
    i++;
    if(i < size_1){
        cout << endl;
        drawSquare(size_1,i);
    }
}


int main()
{
    int border = 0;
    int size_1 = 0;
    cout << "Enter frame size: ";
    cin >> size_1;
    drawSquare(size_1,border);
}
