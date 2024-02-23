#include <iostream>
#include "add.h"

//int add(int x, int y); // Forward function declaration of add().
int main()
{
    std::cout << "Enter first integer number: ";
    int x{6};
    std::cin >> x;

    std::cout << "Enter your second number: ";
    int y{4};
    std::cin >> y;

    // add() works pretty well due to the fact that declaration of it has been made, otherwise it would raise a compile error.
    std::cout << "The sum of " << x << " and " << y << " = " << add(x, y) << '\n'; 
}
