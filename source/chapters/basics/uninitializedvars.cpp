#include <iostream>

void doNothing(int&)
{

}
int main()
{
    int x;

    doNothing(x); // TRicking the compiler,

    std::cout << "The value of uninitialized variable x: " << x << '\n';
    std::cout << sizeof(int) << '\n';

    return 0;
}
