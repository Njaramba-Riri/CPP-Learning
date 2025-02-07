#include <iostream>

int main()
{
    unsigned int array[10];
    unsigned int count{0};

    do
    {
        if((count % 2) == 0)
        {
            ++count;
            continue;
        }

        array[count] = count;
        std::cout << "Loop Iteration: " << array[count++] << std::endl;

        if(count == 10)
        {
            break;
        }
    } while (true);

    return 0;
}
