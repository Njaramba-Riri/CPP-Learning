#include <iostream>

int main()
{
    char ch = 32;

    while (ch <= 126)
    {
        for (int i = 0; i < 5 && ch <= 126; i++)
        {
            for (int j = 0; j < 5 && ch <= 126; j++)
            {
                std::cout << ch << '\t';
                ch++;
            }
            std::cout << std::endl;
        }
    }
    return 0;
}
