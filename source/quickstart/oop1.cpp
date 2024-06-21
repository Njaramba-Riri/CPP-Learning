#include <iostream>
#include <iomanip>
// for setw
using namespace std;
int main()
{
    long pop1=2425785, pop2=47, pop3=9761;
    
    cout << setw(8) << "LOCATION" << setw(20)
    << "POPULATION" << endl
    << setw(8) << "Portcity" << setw(20) << pop1 << endl
    << setw(8) << "Hightown" << setw(20) << pop2 << endl
    << setw(8) << "Lowville" << setw(20) << pop3 << endl;

    return 0;
}
