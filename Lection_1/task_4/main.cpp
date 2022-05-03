#include <iostream>

using namespace std;

int main()
{
    int mPrice = 0, vPrice = 0, cpuPrice = 0, discount = 0;
    cout << "Motherboard price: ";
    cin >> mPrice;
    cout << "Videocard price: ";
    cin >> vPrice;
    cout << "CPU price: ";
    cin >> cpuPrice;
    cout << "Discount: ";
    cin >> discount;
    cout << "Your PC will cost - " << (mPrice + vPrice + cpuPrice) - ((mPrice + vPrice + cpuPrice)*discount/100) << "$";
    return 0;
}
