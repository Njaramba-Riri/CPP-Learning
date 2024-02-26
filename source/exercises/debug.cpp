#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>
#include <iostream>

int getInput()
{
    PLOGD << "getInput() called";

    std::cout << "Enter any number: " << '\n';
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    plog::init(plog::debug, "Logfile.txt"); //Initialize the logger.

    PLOGD << "main() called";

    int x{ getInput() };
    std::cout << "You pressed " << x << '\n';

    return 0;

}
