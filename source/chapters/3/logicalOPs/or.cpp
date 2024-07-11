#include <iostream>
// #include <process.h>
// #include <conio.h>

using namespace std;

int main(){
    char dir{'a'};
    int x{1}, y{10};

    while(dir != '\r'){
        cout << "\nYour current location " << x << ", " << y;
        
        if(x > 15 || x < 5){
            cout << "\nCareful, slowly, be vigilant. Dragons lurk here.";
        }

        cout << "\nEnter new location(n, s, e, w): ";
        // dir = getche();

        switch (dir){
            case 'n': y++; break;
            case 's': y--; break;
            case 'e': x++; break;
            case 'w': x--; break;
            default: cout << "\nInvalid, try again.";
        }
    }

    return 0;
}
