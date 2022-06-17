#include <iostream>

using namespace std;

int main()
{
    char sentence_1[256] = {};
    char sentence_2[256] = {};
    int counter_s1 = 0,counter_s2 = 0;
    cout << "Enter your first string: ";
    cin.getline(sentence_1,256);
    cout << "Enter your second string: ";
    cin.getline(sentence_2,256);
    while(sentence_1[counter_s1]){
        counter_s1++;
    }
    while(sentence_2[counter_s2]){
        counter_s2++;
    }
    if(counter_s1 > counter_s2){
        cout << "First string is bigger!";
    }
    if(counter_s1 < counter_s2){
        cout << "Second string is bigger!";
    }
    if(counter_s1 == counter_s2){
        cout << "Strings are equal!";
    }
    return 0;
}
