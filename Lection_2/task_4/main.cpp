#include <iostream>

using namespace std;

int main()
{
    int size_tree = 0;
    cin >> size_tree;
    for (int i = 0;i < size_tree;i++){
        for(int j = 0;j < size_tree;j++){
            if(j < size_tree-i-1)
                cout << " ";
            else
                break;
        }
        for (int k = 0;k<i*2+1;k++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0;i < size_tree-1;i++){
        cout << " ";
    }
    cout << "*";
    return 0;
}
