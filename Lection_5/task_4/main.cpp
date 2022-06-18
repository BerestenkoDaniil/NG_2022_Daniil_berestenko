#include <iostream>
#include <cmath>

using namespace std;

void rootCalc(double a,double b,double c)
{
    double D;
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
        cout << "First root: " << (-b + sqrt(D))/(2 * a) << endl;
        cout << "Second root: " << (-b - sqrt(D))/(2 * a);
   }
}

int main()
{
    double a = 0, b = 0, c = 0, D = 0;
    rootCalc(a,b,c);
    return 0;
}
