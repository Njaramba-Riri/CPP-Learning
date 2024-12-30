#include <iostream>

using namespace std;

void binaryAND();
void binaryOR();
void binaryXOR();

int main()
{
    binaryAND();
    binaryOR();
    binaryXOR();

    return 0;
}

void binaryAND() {
    cout << "The binary & (AND) operator \n";
    unsigned int first = 0x0F;
    unsigned int second = 0x18;
    unsigned int anded = first & second;

    cout << hex << showbase;
    cout << first << endl;
    cout << second << endl;
    cout << anded << endl;

    cout << "\nEnd the & function\n";
}

void binaryOR()
{
    // Binary | (OR) sets the bit of each column to 1 if either of the input values were 1.

    cout << "The binary | (OR) operator \n";
    unsigned int first = 0x0F;
    unsigned int second = 0x18;
    unsigned int anded = first | second;

    cout << hex << showbase;
    cout << first << endl;
    cout << second << endl;
    cout << anded << endl;

    cout << "\nEnd the | function\n";
}

void binaryXOR()
{
    // Binary ^ (XOR) sets the bit of each column to 0 if both the columns have 1s, 2s... otherwise 1.

    cout << "The binary | (OR) operator \n";
    unsigned int first = 0x0F;
    unsigned int second = 0x18;
    unsigned int anded = first ^ second;

    cout << hex << showbase;
    cout << first << endl;
    cout << second << endl;
    cout << anded << endl;

    cout << "\nEnd the `Exclusive OR/XOR`  function\n\n";
}
