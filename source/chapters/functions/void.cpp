#include <iostream>

// Void functions returns nothing, no need to write a return statement.
void printHi()
{
    std::cout << "Hello! \n";
}

int main()
{
    printHi(); // Will compile but it won't return anything.

    return 0;
}
