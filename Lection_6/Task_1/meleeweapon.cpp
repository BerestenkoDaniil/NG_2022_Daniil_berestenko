#include "meleeweapon.h"

MeleeWeapon::MeleeWeapon()
{
    m_durability = 100;
}

void MeleeWeapon::setDurability(int durability)
{
    if(durability < 50){
        setDamage(getDamage()/2); 
    }
    m_durability = durability;
}
