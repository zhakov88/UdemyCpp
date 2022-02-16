#include <iostream>

template <typename T>
T max(T value_one, T value_two)
{
    if (value_one < value_two)
    {
        return value_two;
    }
    else
    {
        return value_one;
    }
}


int main()
{
    int a = 2;
    int b = 3;
    std::cout << max(a, b) << std::endl;

    float c = 4.5;
    float d = -1.0;
    std::cout << max(c, d) << std::endl;

    double e = 4.5;
    double f = -1.0;
    std::cout << max(e, f) << std::endl;
    return 0;
}
