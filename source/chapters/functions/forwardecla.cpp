#include <iostream>


int add(int x, int y); // Forward function declaration of add().
int main()
{
    int x{6};
    int y{4};

    // add() works pretty well as a declaration of it has been made, otherwise it would raise a compile error.
    std::cout << "The sum of " << x << " and " << y << " = " << add(x, y) << '\n'; 
}

int add( int x, int y)
{
    return x + y;
}
