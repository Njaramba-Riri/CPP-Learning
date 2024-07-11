// Demonstrates passing by reference.

#include <iostream>

using namespace std;

int main(){
    void intfract(float, float&, float&); // Declaration
    float number, intpart, fracpart; // variables(float type)

    do{
        cout << "Enter real number: ";
        cin >> number;

        intfract(number, intpart, fracpart);
        cout << "Integer part is " << intpart
             << ", fraction part is " << fracpart << endl;
    }while(number != 0.0);

    return 0;
}

// Finds integer and fractional parts of a real number.
void intfract(float n, float& intp, float& fracp){
    long temp = static_cast<long>(n); // Convert to long.
    intp = static_cast<float>(temp); // Back to float;
    fracp = n - intp; // Subtract integer part.
}
