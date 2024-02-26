#include <iostream>

int unsignedInt();
int main()
{
    std::cout << "main() is called\n";

    // Assume a 4 byte integer.
    int x{2'147'483'647}; //Maximum value of a 4-byte integer.
    std::cout << x << "\n";

    x = x + 10;
    std::cout << x << "\n"; // integer overflow, undefined behaviour.

    unsignedInt();

    std::cout << "main() ends \n\n";

    return 0;
}

//This function shows the overflow behaviour of unsigned integer.
int unsignedInt()
{
    std::cout << "unsignedInt() is called\n";

    unsigned short x{ 65535 }; // largest 16-bit unsigned value possible
    std::cout << "x was: " << x << '\n';

    x = 65536; // 65536 is out of our range, so --> modulo wrap-around
    std::cout << "x is now: " << x << '\n';

    x = 65537; // 65537 is out of our range, so --> modulo wrap-around
    std::cout << "x is now: " << x << '\n';

    std::cout << "unsignedInt() out of scope\n";

    return 0;
}
