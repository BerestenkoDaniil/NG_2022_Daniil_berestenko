#include <iostream>

#include "inventory_manager.h"
#include "meleeweapon.h"
#include "rangeweapon.h"
#include "enemy.h"

using namespace std;

int main()
{
    Inventory_Manager Player;

    MeleeWeapon Knife("Knife",5,0.5,100,"Panasonic");
    RangeWeapon Riffle("Assault Riffle",15,5,100,1.5,12);
    Player.addMelee(Knife);
    Player.addRange(Riffle);
    Player.addMelee({"Machete",9,1.5,100,"QUAKE"});
    enemy Zombie(100,"Clark");
    int selector;
    while(true){
        Zombie.showStats();
        cout << "Choose option: " << endl
             << "1 - inventory" << endl
             << "2 - choose weapon " << endl
             << "3 - weapon stats" << endl
             << "4 - attack" << endl
             << "5 - fix(range weapon)" << endl
             << "0 - exit" << endl;
        cin >> selector;
        int damage = 0;
        switch(selector){
        case 1:
            Player.showInventory();
            break;
        case 2:
            while(true){
                int type,index;
                cout << "Choose weapon(0-Melee,1-Range,-1 - to exit): ";
                cin >> type;
                if(type == -1){
                    break;
                }
                else if(type == 0 || type == 1){
                    cout << "Enter index: ";
                    cin >> index;
                    Player.chooseWeapon(weaponType(type),index);
                    break;
                }
            }
            break;
        case 3:
            if(Player.getType() == MELEE){
                Player.getMelee()->showStats();
            }
            if(Player.getType() == RANGE){
                Player.getRange()->showStats();
            }
            break;
        case 4:
            if(Player.getType() == MELEE){
                damage = Player.getMelee()->attack();
            }
            if(Player.getType() == RANGE){
                damage = Player.getRange()->attack();
            }
            cout << damage << endl;
            Zombie.setHealth(Zombie.getHealth()-damage);
            break;
        case 5:
            if(Player.getType() == MELEE){
                cout << "Your current weapon is melee!" << endl;
            }
            if(Player.getType() == RANGE){
                Player.getRange()->fix();
            }
            break;
        default:
            return 0;
        }
        system("pause");
        system("cls");
    }
}
