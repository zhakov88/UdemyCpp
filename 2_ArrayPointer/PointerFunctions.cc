#include <iostream>
void f(int *p_function)
{
    std::cout << "(MAIN): p_function " << p_function << std::endl;
    std::cout << "(MAIN): &p_funktion " << &p_function << std::endl;
}

int main()
{
    int *p_number = new int{4};
    std::cout << "(MAIN): p_mumber " << p_number << std::endl;
    std::cout << "(MAIN): &p_mumber " << &p_number << std::endl;
    f(p_number);

    return 0;
}
