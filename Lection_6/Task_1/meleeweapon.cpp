#include "meleeweapon.h"

MeleeWeapon::MeleeWeapon()
    :Weapon()
{
    m_company = "NONE";
    m_durability = 100;

}

MeleeWeapon::MeleeWeapon(string name,int damage,double weight,int durability,string company)
    :Weapon(name,damage,weight)
{
    m_durability = durability;
    m_company = company;
}

void MeleeWeapon::setDurability(int durability)
{
    m_durability = durability;
}

void MeleeWeapon::setCompany(string company)
{
    m_company = company;
}

int MeleeWeapon::getDamage()
{
    if(m_durability < 50){
        return m_damage/2;
    }
    else if(m_durability < 80){
//
    }
    return m_damage;
}

void MeleeWeapon::showStats()
{
    cout << "Melee Weapon: " << m_name << endl
         << "\tDamage: " << m_damage << endl
         << "\tWeight: " << m_weight << endl
         << "\tDurability: " << m_durability << endl
         << "\tCompany: " << m_company << endl;
}

int MeleeWeapon::attack()
{
    int damage = getDamage();
    m_durability--;
    return damage;
}
