#include <iostream>

using namespace std;

int main(){
    long nume, deno;
    char ch;

    do{
        cout << "Enter your numerator: "; cin >> nume;
        cout << "Enter your denomerator: "; cin >> deno;

        if(deno == 0){
            cout << "`0` should not be used as a denomerator!\n";
            continue;
        }
        cout << "Quotient is " << nume / deno;
        cout << ", remainder is " << nume % deno;
        cout << "\nDo another? (y/n): ";
        cin >> ch;
    }
    while(ch != 'n');
    return 0;
}
