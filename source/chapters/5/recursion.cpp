#include <iostream>

using namespace std;

unsigned long factfunc(unsigned long);

int main(){
    int n;
    unsigned long fact;

    cout << "Enter a number: ";
    cin >> n;

    fact = factfunc(n);
    cout << "\nFactorial of " << n << " is " << fact << "\n\n";

    return 0;
}

unsigned long factfunc(unsigned long n){
    if(n > 1){
        return n * factfunc(n-1); // self call.
    }else{
        return 1;
    }
}
