#include <iostream>
#include <cstring>
void Swap(void *vp1, void *vp2, size_t size)
{
    char *buffer = new char[size];

    memcpy(buffer, vp1, size);
    memcpy(vp1, vp2, size);
    memcpy(vp2, buffer, size);

    delete[] buffer;
}
template<typename T>
void SwapModern(T& a, T& b)
{
    T temp = std::move(a);
    a = std::move(b);
    b = std::move(temp);
}

int main()
{
    int i{4}, y{5};
    Swap(&i, &y, sizeof(int*));

    std::cout << "Swapped succesfully!" << std::endl;
    std::cout << "i: " << i << ", y: " << y << std::endl;

    char *husband = strdup("Fred");
    char *wife = strdup("Wilma");
    SwapModern(husband, wife);

    std::cout << "\nSwapped successfully! -->  Modern C++" << std::endl;
    std::cout << "husband: " << husband << ", wife: " << wife << std::endl
              << std::endl;

    Swap(&husband, &wife, sizeof(char*));
    std::cout << "Swapped successfully! --> Legacy(generic)" << std::endl;
    std::cout << "husband: " << husband << ", wife: " << wife << std::endl
              << std::endl;

    return 1;
}
