#include <iostream>

using namespace std;

int main(){
    int age[4];

    for (int j=0; j<4; j++){
        cout << "Enter an age: ";
        cin >> age[j]; // Access array element.
    }

    for( int j=0; j<4; j++){
        cout << "\nYou entered " << age[j] << endl;
    }

    return 0;
}
