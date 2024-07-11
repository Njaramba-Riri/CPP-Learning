#include <iostream>
// #include <conio.h>

using namespace std;

int main(){
    char dir{'a'};
    int x{10}, y{10};

    while(dir != '\r'){
        cout << "\nYour current location is " << x << ", " << y;
        cout << "\nEnter your direction(n, s, e, w): ";
        // dir = getche();

        switch (dir){
            case 'n': y--; break;
            case 's': y++; break;
            case 'e': x++; break;
            case 'w': x--; break;
            case '\r': cout << "Exiting\n";
            default: cout << "Try again\n";
        }
    }

    return 0;
}
