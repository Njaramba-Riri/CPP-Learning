#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int chrcout{0}, wordcount{1};
    char ch = 'a';

    cout << "Enter a phrase: ";
    while(ch != '\r'){
        ch = getche();
        if (ch == ' '){
            wordcount++;
        }else{
            chrcout++;
        }
    }
    cout << "\nWords=" << wordcount << endl
         << "Letters=" << (chrcout-1) << endl;

    return 0; 
}
