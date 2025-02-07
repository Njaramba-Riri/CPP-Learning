#include <stdio.h>
#include <string.h>

int LSearch(int key, int array[], int size)
{
    for (int i = 0; i < size; i++){
        if (array[i] == key){
            return i;
        }
    }

    return -1;
}

void *linear_search(void *key, void *base, int n, int elemSize)
{
    for (int i = 0; i < n; i++){
        void *elemAddr = (char *)base + i * elemSize;
        if (memcmp(key, elemAddr, elemSize) == 0){
            return elemAddr;
        }
    }

    return NULL;
}


int main()
{
    int array[] = {10, 20, 30, 50, 40};
    int key = 40;
    int n = sizeof(array) / sizeof(array[0]);

    int *result = (int *)linear_search(&key, array, n, sizeof(int));

    if (result != NULL){
        printf("Found %d at index %ld\n", *result, result - array);
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}
