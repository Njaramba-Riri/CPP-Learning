#include <iostream>
#include <cstring> 

template <typename T>
T *linear_search(const T &key, T *base, int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (base[i] == key)
        {                    
            return &base[i]; // Return pointer to the found element
        }
    }
    return nullptr; // Return nullptr if not found
}

int main()
{
    // Example 1: Searching in an array of integers
    int arr[] = {10, 20, 30, 40, 50};
    int key = 30;
    int n = sizeof(arr) / sizeof(arr[0]);

    int *result = linear_search(key, arr, n);
    if (result != nullptr)
    {
        std::cout << "Found " << *result << " at index " << (result - arr) << '\n';
    }
    else
    {
        std::cout << "Not found\n";
    }

    // Example 2: Searching in an array of floating-point numbers
    float fArr[] = {1.1f, 2.2f, 3.3f, 4.4f};
    float fKey = 3.3f;

    float *fResult = linear_search(fKey, fArr, 4);
    if (fResult != nullptr)
    {
        std::cout << "Found " << *fResult << " at index " << (fResult - fArr) << '\n';
    }
    else
    {
        std::cout << "Not found\n";
    }

    // Example 3: Searching in an array of structs
    struct Student
    {
        int id;
        char name[20];

        bool operator==(const Student &other) const
        {
            return id == other.id && strcmp(name, other.name) == 0;
        }
    };

    Student students[] = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};
    Student studentKey = {2, "Bob"};

    Student *studentResult = linear_search(studentKey, students, 3);
    if (studentResult != nullptr)
    {
        std::cout << "Found student " << studentResult->name << " with ID " << studentResult->id << '\n';
    }
    else
    {
        std::cout << "Not found\n";
    }

    return 0;
}
