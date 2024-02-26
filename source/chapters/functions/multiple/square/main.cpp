#include "square.h"
#include <iostream>

int main()
{
    std::cout << "A square has " << getSquareSides() << " sides.\n";
    std::cout << "A square of length 5cm has perimeter length " << getSquarePerimeter(5) << "cm.\n";

    return 0;
}
