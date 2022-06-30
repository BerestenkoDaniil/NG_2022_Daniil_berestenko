#ifndef INVENTORY_MANAGER_H
#define INVENTORY_MANAGER_H

#include <vector>
#include "meleeweapon.h"
#include "rangeweapon.h"

enum weaponType
{
    MELEE,
    RANGE
};


class Inventory_Manager
{
public:
    Inventory_Manager();
    void addMelee(MeleeWeapon weapon);
    void addRange(RangeWeapon weapon);
    void chooseWeapon(weaponType type,int index);
    weaponType getType(){return m_weapontype;}
    MeleeWeapon* getMelee(){return &m_melee[m_weaponindex];}
    RangeWeapon* getRange(){return &m_range[m_weaponindex];}
    void showInventory();
    void useWeapon();


private:
    vector<MeleeWeapon> m_melee;
    vector<RangeWeapon> m_range;
    weaponType m_weapontype;
    int m_weaponindex = -1;
};

#endif // INVENTORY_MANAGER_H
