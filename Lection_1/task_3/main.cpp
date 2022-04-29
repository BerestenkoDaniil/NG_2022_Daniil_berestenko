#include <iostream>

using namespace std;

int main()
{
    int age = 0,selector = 0;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 10){
        cout << "Do you study?(1/0): ";
        cin >> selector;
        if (selector == 1){
            cout << "You are awesome!";
        }
        if (selector == 0){
            cout << "Why so?";
        }
    }
    if (age < 10){
        cout << "Wow, you're already so big!";
    }
    return 0;
}
