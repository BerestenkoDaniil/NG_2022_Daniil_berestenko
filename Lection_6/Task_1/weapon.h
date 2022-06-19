#ifndef WEAPON_H
#define WEAPON_H
#include <string.h>
#include <iostream>

using namespace std;

class Weapon
{
public:
    Weapon();
    void setWeight(double weight){m_weight = weight;}
    void setDamage(int damage){m_damage = damage;}
    void setName(string name){m_name = name;}

    double getWeight(){return m_weight;}
    string getName(){return m_name;}
    int getDamage(){return m_damage;}
private:
    double m_weight;
    int m_damage;
    string m_name;
};

#endif // WEAPON_H
