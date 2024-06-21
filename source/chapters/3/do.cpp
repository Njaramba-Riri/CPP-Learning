#include <iostream>

using namespace std;

int main()
{
    long nemu, denom;
    char ch;

    do
    {
        cout << "Enter the numerator: "; cin >> nemu;
        cout << "Enter the denomerator: "; cin >> denom;
        cout << "The quotient of " << nemu << "/" << denom <<  " is: " << nemu/denom;
        cout << ", and the remainder is: " << nemu%denom << endl;

        cout << "\nDo it again? (y/n): ";
        cin >> ch;
    }
    while(ch != 'n');

    return 0;
}
