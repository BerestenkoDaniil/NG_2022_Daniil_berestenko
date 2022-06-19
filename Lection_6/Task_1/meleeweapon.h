#ifndef MELEEWEAPON_H
#define MELEEWEAPON_H
#include "weapon.h"

class MeleeWeapon:public Weapon
{
public:
    MeleeWeapon();
    int getDurability(){return m_durability;}
    void setDurability(int durability);

private:
    int m_durability;
};

#endif // MELEEWEAPON_H
