#include <iostream>

#include "exercise.h"

namespace computation
{

// Exercise 1
double mean_array_value(int *array, const unsigned int &length)
{
    int sum = 0;
    for (int i; i < length; i++)
    {
        sum += array[i];
    }
    return sum / length;
}

double mean_array_value(double *array, const unsigned int &length)
{
    double sum = 0;
    for (int i; i < length; i++)
    {
        sum += array[i];
    }
    return sum / length;
}


} // namespace computation
