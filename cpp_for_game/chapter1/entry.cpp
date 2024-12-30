#include <stdfix.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "What is your name?" << endl;

    string name{};
    cin >> name;

    cout << "You said your name is " << name << endl;

    return 0;
}
