#include <iostream>

using namespace std;

void repchar(int, char);

int main(){
    int times;
    char val;

    cout << "Enter a character to use: ";
    cin >> val;

    cout << "How many times to repeat it?: ";
    cin >> times;

    repchar(times, val);
}

void repchar(int times, char val){
    for(int i=0; i<times; i++){
        cout << val;
    }
    cout << endl;
}
