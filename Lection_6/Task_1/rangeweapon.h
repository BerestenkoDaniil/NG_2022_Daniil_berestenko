#ifndef RANGEDAMAGE_H
#define RANGEDAMAGE_H
#include "weapon.h"

class RangeDamage:public Weapon
{
public:
    RangeDamage();
    void setRange(int range){m_range = range;}
    int getRange(){return m_range;}

private:
    int m_range;
};

#endif // RANGEDAMAGE_H
