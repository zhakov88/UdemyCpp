#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

void print_vector(const std::vector<int> &my_vector)
{
    for (std::size_t i = 0; i < my_vector.size(); i++)
    {
        std::cout << "Vec[" << i << "] = " << my_vector[i] << std::endl;
    }
    std::cout << std::endl;
}

void print_vector_info(const std::vector<int> &my_vector)
{
    std::cout << "Size: " << my_vector.size() << std::endl;
    std::cout << "Capacity: " << my_vector.capacity() << std::endl;
    std::cout << "Empty?: " << std::boolalpha << my_vector.empty() << std::endl << std::endl;
}

bool sort_decending(const int i, const int j)
{
    return i > j;
}

bool sort_ascending(const int i, const int j)
{
    return i < j;
}

int main()
{
    std::vector<int> my_vector(10, 0);
    std::iota(my_vector.begin(), my_vector.end(), 0);
    print_vector(my_vector);

    std::sort(my_vector.begin(), my_vector.end(), sort_decending);
    print_vector(my_vector);

    std::sort(my_vector.begin(), my_vector.end(), sort_ascending);
    print_vector(my_vector);

    return 0;
}
