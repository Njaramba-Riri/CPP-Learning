#include <iostream>
// #include <process.h>
// #include <conio.h>

using namespace std;

int main(){
    char dir{'a'};
    int x{10}, y{10};

    while(dir != '\r'){
        cout << "\nYour current location " << x << ", " << y;
        cout << "\nEnter new location(n, s, e, w): ";
        // dir = getche();

        switch (dir){
            case 'n': y++; break;
            case 's': y--; break;
            case 'e': x++; break;
            case 'w': x--; break;
            default: cout << "\nInvalid, try again.";
        }

        if(x==7 && y==11){
            cout << "Hooray!, you found the treasure!.\n";
            exit(0);
        }
    }

    return 0;
}
