#include <iostream>

using namespace std;

int main()
{
    char sentence[256] = {};
    int iter = 0;
    cout << "Enter your sentence: ";
    cin.getline(sentence,256);
    while(sentence[iter] != 0){
            if(iter%2 == 0){
                if(sentence[iter] == 'a' || sentence[iter] == 'e' ||
                   sentence[iter] == 'y' || sentence[iter] == 'u' ||
                   sentence[iter] == 'i' || sentence[iter] == 'o' ||
                   sentence[iter] == 'A' || sentence[iter] == 'E' ||
                   sentence[iter] == 'Y' || sentence[iter] == 'U' ||
                   sentence[iter] == 'I' || sentence[iter] == 'O')
               cout << sentence[iter];
            }
            iter++;
    }
    return 0;
}
