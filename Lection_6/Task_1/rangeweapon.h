#ifndef RANGEWEAPON_H
#define RANGEWEAPON_H
#include "weapon.h"

#include <random>
#include <ctime>

class RangeWeapon:public Weapon
{
public:
    RangeWeapon();
    RangeWeapon(string name,int damage,double weight,int range,double rapidity,int ammo);
    void setRange(int range){m_range = range;}
    int getRange(){return m_range;}
    void setRapidity(double rapidity){m_rapidity = rapidity;}
    double getRapidity(){return m_rapidity;}
    void setAmmo(int ammo){m_ammo = ammo;}
    int getAmmo(){return m_ammo;}
    void fix();
    int attack();
    void showStats();


private:
    bool m_misfired;
    int m_range;
    double m_rapidity;
    int m_ammo;
};

#endif // RANGEWEAPON_H
