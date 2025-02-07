#include "extern.h"
#include <iostream>

int globalVariable{0};
static int fileVariable{0};

int main()
{
    IncrementGlobalCounters();
    std::cout << "Global variable: " << globalVariable << std::endl;
    std::cout << "File variable: " << fileVariable << std::endl;

    return 0;
}
