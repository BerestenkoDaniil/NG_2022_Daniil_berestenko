#include <iostream>

using namespace std;

int main()
{
    string sentence_1,sentence_2;
    cout << "Enter your first string: ";
    getline(cin,sentence_1);
    cout << "Enter your second string: ";
    getline(cin,sentence_2);
    if (sentence_1.size() > sentence_2.size()){
        cout << "First string is bigger!";
    }
    if (sentence_1.size() < sentence_2.size()){
        cout << "Second string id bigger!";
    }
    if (sentence_1.size() == sentence_2.size()){
        cout << "Strings are equal!";
    }
    return 0;
}
