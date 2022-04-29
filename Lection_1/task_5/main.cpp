#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a = 0, b = 0, c = 0, D = 0, x1 = 0, x2 = 0;
    cout << "Enter first value: ";
    cin >> a;
    cout << "Enter second value: ";
    cin >> b;
    cout << "Enter third value: ";
    cin >> c;
    D = b*b - 4*a*c;
    if (D==0){
        cout << D;
    }
    if (D<0){
        cout << "There is no roots!";
    }
    if (D>0){
        x1=(-b + sqrt(D))/(2 * a);
        x2=(-b - sqrt(D))/(2 * a);
        cout << "First root: " ;
        cout << x1 << endl;
        cout << "Second root: ";
        cout << x2;
   }
    return 0;
}
