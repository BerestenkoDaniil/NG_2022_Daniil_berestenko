#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    int array1[4],array2[4];
    int summ1 = 0,summ2 = 0;
    for (int i = 0; i < 4; i++){
        array1[i] = 1 + rand()%9;
        array2 [i] = 1 + rand()%9;
    }
    for (int i = 0,buffer = 1000; i<4;i++){
        summ1 += array1[i]*buffer;
        summ2 += array2[i]*buffer;
        buffer = buffer/10;
    }
    cout << "First array: " << summ1 << endl;
    cout << "Second array: " << summ2;
    cout << endl;
    if (summ1 > summ2){
        cout << summ1 << " > " << summ2;
    }
    else if (summ1 < summ2){
        cout << summ1 << " < " << summ2;
    }
    else if (summ1 == summ2){
        cout << summ1 << "=" << summ2;
    }
    return 0;
}
