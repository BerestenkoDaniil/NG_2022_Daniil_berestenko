#ifndef WEAPON_H
#define WEAPON_H
#include <string.h>
#include <iostream>

using namespace std;

class Weapon
{
public:
    Weapon();
    Weapon(string name,int damage,double weight);
    void setDamage(int damage){m_damage = damage;}
    void setName(string name){m_name = name;}
    void setWeight(double weight){m_weight = weight;}

    int attack();
    string getName(){return m_name;}
    int getDamage(){return m_damage;}
    double getWeight(){return m_weight;}
protected:
    double m_weight;
    int m_damage;
    string m_name;
};

#endif // WEAPON_H
