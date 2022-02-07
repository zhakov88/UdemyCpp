#include <iostream>

int main()
{
    char first_name[] = {'A', 'r', 't', 'e', 'm', '\0'};
    std::cout << first_name << std::endl;

    char last_name[] = "Zhakov";
    std::cout << last_name << std::endl;

    for (int i = 0; i < 6; i++)
    {
        std::cout << "Last Name[i]: " << last_name[i] << std::endl;
    }

    return 0;
}
