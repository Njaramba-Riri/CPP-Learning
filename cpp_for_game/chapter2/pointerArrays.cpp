#include <iostream>

using namespace std;

int main()
{
    int arrays[5] = { 0, 1, 2, 3, 4 };

    cout << "Value: " << *arrays << endl;
    cout << "Value: " << *(arrays + 1) << endl;
    cout << "Value: " << *(arrays + 2) << endl;
    cout << "Value: " << *(arrays + 3) << endl;
    cout << "Value: " << *(arrays + 4) << endl;
    cout << "\nArray memory address: " << arrays << "\n\n";

    return 0;
}
