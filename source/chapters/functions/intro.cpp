#include <iostream>

/* Basic user-defined function follows:'
* returnType functionName()
*/

void doPrint() 
{
    std::cout << "In doPrint()\n";
}

int main()
{
    std::cout << "Starting main()\n";
    doPrint(); //Interrupts the execution of main() by making a function call to doPrint(). Here, main is the caller.
    std::cout << "Ending main()\n";

    return 0;
}
