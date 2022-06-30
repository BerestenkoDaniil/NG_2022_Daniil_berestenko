#include "weapon.h"

Weapon::Weapon()
{
   m_name = "none";
   m_damage = 0;
   m_weight = 1.0;
}

Weapon::Weapon(string name,int damage,double weight)
{
   m_name = name;
   m_damage = damage;
   m_weight = weight;
}

int Weapon::attack()
{
    return getDamage();
}
