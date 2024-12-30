#include <iostream>

using namespace std;

struct ithafuParams
{
    int valueA;
    int valueB;
    int result;
};

void ReturnSum(ithafuParams& params)
/**
 * Computes the sum of valueA and valueB from the given ithafuParams structure
 * and stores the result in the result field of the same structure.
 *
 * @param params Reference to an ithafuParams structure containing the input values
 *               and where the result will be stored.
 */
{
    params.result = params.valueA + params.valueB;
}

int main()
{
    ithafuParams params;
    params.result = 0;

    cout << "Enter first value: ";
    cin >> params.valueA;

    cout << "Enter second value: ";
    cin >> params.valueB;

    ReturnSum(params);

    cout << "The sum of " 
            << params.valueA << " and " << params.valueB 
            << " is " << params.result << endl << endl;

    return 0;
}
