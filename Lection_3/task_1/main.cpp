#include <iostream>

using namespace std;

int main()
{
    int size = 0, selector = 0,buffer = 0;
    cout << "Enter array size: ";
    cin >> size;
    int array [size];
    for (int i = 0; i < size;i++){
        cout << "Enter " << i+1 << " element of array: ";
        cin >> array[i];
    }
    cout << "What number do you want to check: ";
    cin >> selector;
    for(int j = 0;size > j;j++){
            if(selector == array[j]){
             buffer = 1;
            }
    }
    if (buffer == 1){
        cout << "I know that number!";
    }
    if (buffer == 0){
        cout << "I don't know this number!";
    }
    return 0;
}
