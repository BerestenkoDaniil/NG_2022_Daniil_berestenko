#ifndef ENEMY_H
#define ENEMY_H
#include <string.h>
#include <iostream>

using namespace std;


class enemy
{
public:
    enemy();
    enemy(int health,string name);
    void setHealth(int health);
    void setName(string name){m_name = name;}
    void showStats();

    int getHealth(){return m_health;}
    string getName(){return m_name;}

private:
    int m_basichealth;
    int m_health;
    string m_name;
};

#endif // ENEMY_H
