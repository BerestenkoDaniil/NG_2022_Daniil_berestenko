#include <iostream>

using namespace std;

int main()
{
    int number = 0, sum = 0;
    cout << "Enter your number: ";
    cin >> number;
    for(int i = number;i > 0;i/=10){
        if(i%2 == 0){
            sum +=i%10;
        }
    }
    cout << "Summ of even numbers is: " << sum;
    return 0;
}
