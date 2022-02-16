#include <cstddef>
#include <iostream>

#include "AlgoArray.h"
#include "DynArray.h"
#include <vector>

DynamicArray<int> f()
{
    return DynamicArray<int>(1.0, 3);
}

int main()
{
    DynamicArray<int> a1(1.0, 3);
    DynamicArray<int> a2(-1.0, 4);

    DynamicArray<int> a3 = a2;   // Copy constructor
    DynamicArray<int> a4(a2);    // Copy constructor
    DynamicArray<int> a5{a2};    // Copy constructor
    DynamicArray<int> a6 = {a2}; // Copy constructor

    a1 = a2; // Copy assignment operator

    (void)a3; // Dummy
    (void)a4; // Dummy
    (void)a5; // Dummy
    (void)a6; // Dummy

    DynamicArray a7 = std::move(a6); // Move constructor
    a7 = std::move(a5);              // Move assignment operator

    std::vector<int> v1 = std::vector<int>(1, 2);

    return 0;
}
