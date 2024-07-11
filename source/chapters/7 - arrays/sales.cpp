#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    const int SIZE = 6;
    double sales[SIZE];

    cout << "Sales widget: Record sales for the " << SIZE << " days.\n\n";

    for (int j=0; j<50; j++)
        cout << "*";
    cout << endl;

    for( int j=0; j<SIZE; j++){
        cout << setw(8) << "Enter sale for day " << j + 1 << ": $"; 
        cin >> sales[j];
    }

    double total = 0;
    for( int i=0; i<SIZE; i++){
        total += sales[i];
    }

    double average = total / SIZE;
    for (int j=0; j<50; j++)
        cout << "*";
    cout << endl;
    cout << setw(32) << "Average sale of the week: $" << average << endl;
    for (int j=0; j<50; j++)
        cout << "*";
    cout << endl;

    return 0;
}
