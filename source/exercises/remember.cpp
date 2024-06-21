#include <stdio.h>
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int x{};
    cout << "Enter number: ";
    cin >> x;
    
    int y{};
    cout << "Enter second number: ";
    cin >> y;

    cout << y << " multiplied by " << x << " equals " << x * y << '\n';

    asctime(localtime);

    return 0;
}
