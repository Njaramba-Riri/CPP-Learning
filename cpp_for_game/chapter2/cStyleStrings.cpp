#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    const char* cStyleString = "CStyleString";
    char cStyleString2[13];
    char cStyleString3[13];

    cout << cStyleString << endl;
    cout << (cStyleString[12] == '\0') << endl; // Null terminator added by C++

    /* FUNCTIONS TO WORK WITH C STYE STRINGS. */

    cout << "Result for `strlen`: " << strlen(cStyleString) << endl; // Returns the number of characters in a string excluding null terminator.
    cout << "Result for `strcmp`: " << strcmp(cStyleString, cStyleString) << endl; // Checks if two strings match and return `0` if they do.
    
    strcpy(cStyleString2, cStyleString); // Copies a string from one array into another. 
    cout << "Result for `strcpy`: " << cStyleString2 << endl;

    strcpy(cStyleString3, "CStyle"); // For copying a string into an array.
    strcat(cStyleString3, "Strings"); // For concatenating two strings.
    cout << "Result for `strcat`: " << cStyleString3 << endl << endl;

    return 0;
}
