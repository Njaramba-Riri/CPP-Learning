#include <iostream>
#include "add.cpp"

int add(int x, int y); // Forward function declaration of add().
int main()
{
    int x{6};
    int y{4};

    // add() works pretty well due to the fact that declaration of it has been made, otherwise it would raise a compile error.
    std::cout << "The sum of " << x << " and " << y << " = " << add(x, y) << '\n'; 
}
