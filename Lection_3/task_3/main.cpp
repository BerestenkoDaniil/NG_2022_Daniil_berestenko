#include <iostream>

using namespace std;

int main()
{
    int arr[20];
    int arr_max = -1;
    for (int i = 0; i < 20;i++){
        cout << "Enter " << i+1 << " element of array: ";
        cin >> arr[i];
        if (arr[i] == 0)
            break;
        if (arr[i] > arr_max){
            arr_max = arr[i];
        }
    }
    for (int i = 0; i < arr_max;i++){
        for (int j = 0;j < 20;j++){
            if (arr[j] == 0)
                break;
            if (arr[j] >= i+1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
