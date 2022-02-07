#include <iostream>

void print_int_pointer(int *&p)
{
    std::cout << "Deref: " << *p << " Ref: " << p << " Pointer Address: " << &p << std::endl;
}

void print_double_pointer(double *&p)
{
    std::cout << "Deref: " << *p << " Ref: " << p << " Pointer Address: " << &p << std::endl;
}

int main()
{
    int a = 1337;
    float b = -13.37;
    int *c = &a;

    *c -= 10;
    print_int_pointer(c);

    int *d = &a;
    print_int_pointer(c);

    *c -= 10;
    print_int_pointer(d);

    *c = b;
    print_int_pointer(c);

    return 0;
}
