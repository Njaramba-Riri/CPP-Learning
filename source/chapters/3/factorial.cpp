#include  <iostream>

using namespace std;

int main()
{
    unsigned int numb;
    unsigned long fact{1};

    cout << "Enter a number: ";
    cin >> numb;

    for(int i=numb; i>0; i--){
        fact *= i;
        cout << "Factorial is: " << fact << endl;
    }

    return 0;
}
