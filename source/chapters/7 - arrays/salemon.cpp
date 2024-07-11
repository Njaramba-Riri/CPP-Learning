// Displays sales chart using 2-d array.
#include <iostream>
#include <iomanip>

using namespace std;

const int DISTRICTS = 4;
const int MONTHS = 3; //Array dimensions.

int main(){
    int d, m;
    double sales[DISTRICTS][MONTHS]; // 2-d arrray definition.

    cout << endl;
    for(d=0; d<DISTRICTS; d++){ //get array values.
        for(m=0; m<MONTHS; m++){
            cout << "Enter sales for district " << d+1;
            cout << ", month " << m+1 << ": ";
            cin >> sales[d][m];
        }
    }   

    cout << "\n\n";
    cout << "                       Month\n";
    cout << "               1               2            3\n";

    for( d=0; d<DISTRICTS; d++){
        cout << "\nDistrict " << d+1;
        for(m=0; m<MONTHS; m++){
            cout << setiosflags(ios::fixed)     // not exponential.
                 << setiosflags(ios::showpoint) // always use point.
                 << setprecision(2)             // digits to right.
                 << setw(10)                    // field width.
                 << sales[d][m];                // get value from array.
        }
    }
    cout << endl;

    return 0;
}
