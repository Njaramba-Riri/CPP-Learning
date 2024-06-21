#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num{1}, pow{1};

    while (pow < 10000){
        cout << setw(2) << num;
        cout << setw(5) << pow << endl;
        ++num;
        pow = num * num * num * num;
    }

    return 0;
}
