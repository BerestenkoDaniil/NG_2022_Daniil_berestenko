#include "enemy.h"

enemy::enemy()
{
    m_basichealth = m_health = 10;
    m_name = "none";
}

enemy::enemy(int health,string name)
{
    m_basichealth = m_health = health;
    m_name = name;  
}

void enemy::setHealth(int health)
{
    m_health = health;
    if(health <= 0){
        m_health = 0;
        cout << m_name << " is dead!" << endl;
    }
}

void enemy::showStats()
{
    cout << "Enemy: " << m_name << " | "
         << "curent health: " << m_health << endl;
    cout << "|";
    for(int i = 0; i < m_basichealth;i++){
        cout << (i < m_health ?"*":"-");
    }
    cout << "|" << endl;
}

