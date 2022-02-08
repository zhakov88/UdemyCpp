#pragma once

#include "DynArray.h"

/**
 * @brief
 *
 * @param dynamic_array
 * @return double
 */
double sum(const DynamicArray &dynamic_array);

/**
 * @brief
 *
 * @param dynamic_array
 * @return double
 */
double mean(const DynamicArray &dynamic_array);

/**
 * @brief
 *
 * @param dynamic_array
 * @return double
 */
double median(const DynamicArray &dynamic_array);


double variance(const DynamicArray &dynamic_array);

double stddev(const DynamicArray &dynamic_array);
