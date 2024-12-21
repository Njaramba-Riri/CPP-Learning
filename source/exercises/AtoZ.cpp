#include <iostream>
using namespace std;

void printAlphabetFrom(char start)
{
    for (char c = start; c <= 'Z'; ++c)
    {
        cout << c << " ";
    }
    for (char c = 'A'; c < start; ++c)
    {
        cout << c << " ";
    }
    cout << endl;
}

int main()
{
    char input;
    cout << "Enter a character (A-Z) to start from, or press Enter to print all alphabetical characters: ";
    cin.get(input);

    if (input >= 'A' && input <= 'Z')
    {
        printAlphabetFrom(input + 1);
    }
    else
    {
        printAlphabetFrom('A');
    }

    return 0;
}
