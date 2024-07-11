/* Demonstartes return types as it converts pounds to kgs.
*/
#include <iostream>

using namespace std;

float lbstokg(float); // Declaration.
void setColor(int);

int main(){
    float lbs;

    cout << "Enter weight in pounds: ";
    cin >> lbs;

    cout << "Weight in kilograms is: " << lbstokg(lbs) << endl;

    return 0;
}

float lbstokg(float pounds){
    return (0.453592F * pounds);
}
