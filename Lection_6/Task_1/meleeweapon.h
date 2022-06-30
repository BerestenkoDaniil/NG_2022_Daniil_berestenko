#ifndef MELEEWEAPON_H
#define MELEEWEAPON_H
#include "weapon.h"

class MeleeWeapon:public Weapon
{
public:
    MeleeWeapon();
    MeleeWeapon(string name,int damage,double weight,int durability,string company);
    int getDurability(){return m_durability;}
    void setDurability(int durability);
    void setCompany(string company);
    string getCompany(){return m_company;}
    int getDamage();
    void showStats();
    int attack();

private:
    string m_company;
    int m_durability;
};

#endif // MELEEWEAPON_H
