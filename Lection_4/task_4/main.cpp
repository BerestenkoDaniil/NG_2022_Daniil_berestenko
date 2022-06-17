#include <iostream>

using namespace std;

int main()
{
    char YourString[255];
    int amount = 1;
    cout << "Enter the string: ";
    cin.get(YourString, 255);
    for (int index = 0; YourString[index+1] != '\0'; index++)
    {
        if((((YourString[index] >= 'a' &&YourString[index] <= 'z') || (YourString[index] >= 'A' && YourString[index] <= 'Z')) && !((YourString[index+1] >= 'a' && YourString[index+1] <= 'z') || (YourString[index+1] >= 'A' && YourString[index+1] <= 'Z'))) || (YourString[index] >= 'a' &&YourString[index] <= 'z') && (YourString[index+1] >= 'A' &&YourString[index+1] <= 'Z'))
            amount++;
    }
    cout << "Result: " << amount;
    return 0;
}
