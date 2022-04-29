#include <iostream>

using namespace std;

int main()
{
    int mPrice = 0, vPrice = 0, cpuPrice = 0, discount = 0;
    float total_price = 0;
    cout << "Motherboard price: ";
    cin >> mPrice;
    cout << "Videocard price: ";
    cin >> vPrice;
    cout << "CPU price: ";
    cin >> cpuPrice;
    cout << "Discount: ";
    cin >> discount;
    total_price = (mPrice + vPrice + cpuPrice) - ((mPrice + vPrice + cpuPrice)*discount/100);
    cout << "Your PC will cost - " << total_price << "$";
    return 0;
}
