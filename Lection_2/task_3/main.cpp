#include <iostream>

using namespace std;

int main()
{
    int numm = 0, summ = 0, buffer = 0;
    cout << "Enter your number: ";
    cin >> numm;
    buffer = numm%10;
    for(int i = numm;i > 0;i/=10){
        if(i%10 == i/10%10 || i == buffer){
            summ += i%10;
        }
    }
    cout << "Hesh number is: " << summ;
    return 0;
}
