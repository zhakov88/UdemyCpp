#pragma once

#include <iostream>
#include <string>

class Animal
{
public:
    Animal(const std::string &name) : m_name(name)
    {
        std::cout << "Animal Constructor!" << std::endl;
    }

    ~Animal()
    {
        std::cout << "Animal Denstructor!" << std::endl;
    }

private:
    const std::string m_name;
};

class Dog : public Animal
{
public:
    Dog(const std::string &name) : Animal(name)
    {
        std::cout << "Dog Constructor!" << std::endl;
    }

    ~Dog()
    {
        std::cout << "Dog Denstructor!" << std::endl;
    }
};
