#include <iostream>

using namespace std;

int countWords(char text[],int arr_size)
{
    int amount = 1;
    for (int index = 0; text[index+1] != '\0'; index++){
        if((((text[index] >= 'a' && text[index] <= 'z') ||
             (text[index] >= 'A' && text[index] <= 'Z')) &&
            !((text[index+1] >= 'a' && text[index+1] <= 'z') ||
              (text[index+1] >= 'A' && text[index+1] <= 'Z'))) ||
           (text[index] >= 'a' && text[index] <= 'z') &&
           (text[index+1] >= 'A' && text[index+1] <= 'Z'))

            amount++;
    }
    return amount;
}


int main()
{
    char YourString[255];
    cout << "Enter the string: ";
    cin.get(YourString, 255);
    cout << "Result: " << countWords(YourString,255);
    return 0;
}
