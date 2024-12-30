#include <iostream>

using namespace std;

void ReturnSum(int valueA, int valueB, int *returnValue)
{
    *returnValue = valueA + valueB;
}

void passByReference(int valueA, int valueB, int& returnValue)
{
    returnValue = valueA + valueB;
}

int main()
{
    int sum = 0;

    cout << "Enter first value: ";
    int valueA;
    cin >> valueA;

    cout << "Enter second value: ";
    int valueB;
    cin >> valueB;

    ReturnSum(valueA, valueB, &sum);

    cout << "The sum of " 
            << valueA << " and " << valueB 
            << " is " << sum << endl << endl;

    passByReference(valueA, valueB, sum);
    cout << "Pass by reference "
         << valueA << " + " << valueB
         << " is " << sum << endl
         << endl;

    return 0;
}
