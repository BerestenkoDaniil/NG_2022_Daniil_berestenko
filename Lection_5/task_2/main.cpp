#include <iostream>

using namespace std;


void createArray(int arr[],int arr_size,int i)
{
   if(i < arr_size){
        cout << "Enter " << i+1 << " element of array: ";
        cin >> arr[i];
        createArray(arr,arr_size,i+1);
    }
}


int findElem(int arr[],int arr_size,int selector,int i = 0)
{
    if (i<arr_size){
        if(arr[i] == selector){
            return i;
        }
        return findElem(arr,arr_size,selector,i+1);
    }
    else
        return -1;
}


int main()
{
    int arr_size = 0,selector = 0,i = 0;
    cout << "Enter your array size: ";
    cin >> arr_size;
    int arr[arr_size];
    createArray(arr,arr_size,i);
    cout << "Enter number that you want to search: ";
    cin >> selector;

    int res = findElem(arr,arr_size,selector);
    if(res != -1){
        cout << "Found this number: arr[" << res << "] - " << arr[res];
    }
    else
        cout << "Number not found!";
    return 0;
}
