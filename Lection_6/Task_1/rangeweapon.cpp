#include "rangeweapon.h"



RangeWeapon::RangeWeapon()
    :Weapon()
{
    m_range = 0;
    m_rapidity = 3.0;
}

RangeWeapon::RangeWeapon(string name,int damage,double weight,int range,double rapidity,int ammo)
    :Weapon(name,damage,weight)
{
    m_range = range;
    m_rapidity = rapidity;
    m_ammo = ammo;
}

void RangeWeapon::fix()
{
    if(m_misfired == true){
        cout << "You fixed " << m_name << endl;
        m_misfired = false;
    }
    else{
        cout << m_name << " doesn't have to be fixed" << endl;
    }

}

int RangeWeapon::attack()
{
    srand(time(NULL));
    if(rand()%2 == 1){
        m_misfired = true;
        cout << m_name << " misfired" << endl;
        return 0;
    }
    if(m_ammo > 0 && m_misfired == false){
        m_ammo--;
        return getDamage();
    }
    else{
        cout << "Check your weapon!" << endl;
        return 0;
    }
}

void RangeWeapon::showStats()
{
    cout << "Range Weapon: " << m_name << endl
         << "\tDamage: " << m_damage << endl
         << "\tWeight: " << m_weight << endl
         << "\tRange: " << m_range << "m" << endl
         << "\tRapidity: " << m_rapidity << endl
         << "\tAmmo: " << m_ammo << endl;
}
