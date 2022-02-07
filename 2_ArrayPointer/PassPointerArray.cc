#include <iostream>

// int* input_array <=> int input_array[]
int array_maximum(int *input_array, unsigned int length)
{
    int current_max_value = 0;
    for (int i = 0; i < length; i++)
    {
        if (i == 0)
        {
            current_max_value = input_array[i];
        }
        else if (input_array[i] > current_max_value)
        {
            current_max_value = input_array[i];
        }
    }
    return current_max_value;
}

int main()
{
    unsigned int array_size = 10;

    // Heap Allocation
    int *p = new int[array_size];

    // Size of the pointer  itself in Bytes
    std::cout << sizeof(p) << std::endl;

    // Size of the first array element that the pointer points to
    std::cout << sizeof(*p) << std::endl;

    for (int i = 0; i < array_size; i++)
    {
        p[i] = i;
    }

    std::cout << array_maximum(p, array_size) << std::endl;

    // Heap De-Allocation
    delete[] p;

    int a[5] = {4, 5, 6, 7, 8};
    std::cout << array_maximum(a, 5) << std::endl;

    return 0;
}
