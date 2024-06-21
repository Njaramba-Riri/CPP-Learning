#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i;

    for(i=1; i<=10; i++){
        cout << setw(4) << i << "^3";
        cout << setw(6) <<  i * i * i << " ";
        cout << endl;       
    }
    
    return 0;
}
