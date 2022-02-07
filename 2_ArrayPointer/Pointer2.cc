#include <iostream>

int main()
{
    // Heap allocation
    int *p = new int;
    *p = 4;
    std::cout << "memory adress of p: " << &p << std::endl;
    std::cout << "memory adress of of pointed value: " << p << std::endl;
    std::cout << "Value of the memory adress p points to: " << *p << std::endl; // 4

    *p = 1213;
    std::cout << "memory adress of p: " << &p << std::endl;
    std::cout << "memory adress of of pointed value: " << p << std::endl;
    std::cout << "Value of the memory adress p points to: " << *p << std::endl; // 4

    //Heap de-allocate
    delete p;
    std::cout << "memory adress of of pointed value: " << p << std::endl;
    p = nullptr;
    std::cout << "memory adress of of pointed value: " << p << std::endl;
    if (p ! = nullptr)
    {
        std::cout << *p << std::endl;
    }

    return 0;
}
