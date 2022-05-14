#include <iostream>

using namespace std;

int main()
{
    int value = 0;
    cout << "Enter size of the frame: ";
    cin >> value;
    for (int i = 0; i < value; i++) {
        for (int j = 0; j < value; j++) {
            if (i != 0 && i != value-1 && j != 0 && j != value-1)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
}
