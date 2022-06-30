#include "inventory_manager.h"

Inventory_Manager::Inventory_Manager()
{

}

void Inventory_Manager::addMelee(MeleeWeapon weapon)
{
    m_melee.push_back(weapon);
}

void Inventory_Manager::addRange(RangeWeapon weapon)
{
    m_range.push_back(weapon);
}

void Inventory_Manager::chooseWeapon(weaponType type, int index)
{
    if (index < 0 || (type == MELEE && index >= m_melee.size()) ||
                     (type == RANGE && index >= m_range.size())){
        cout << "Error,wrong index" << endl;
        return;
    }
    m_weapontype = type;
    m_weaponindex = index;
    cout << "Chosen weapon: " << endl;
    if(m_weapontype == MELEE){
        m_melee[index].showStats();
    }
    else if(m_weapontype == RANGE){
        m_range[index].showStats();
    }
}

void Inventory_Manager::showInventory()
{
    cout << "Melee weapon: " << m_melee.size() << " items" << endl;
    for(int i = 0;i < m_melee.size();i++){
        cout << i << " " << m_melee[i].getName() << endl;
    }
    cout << "Range weapon: " << m_range.size() << " items" << endl;
    for(int i = 0;i < m_range.size();i++){
        cout << i << " " << m_range[i].getName() << endl;
    }
}

void Inventory_Manager::useWeapon()
{
    if (m_weaponindex < 0){
        cout << "No weapon is chosen!";
        return;
    }

}
