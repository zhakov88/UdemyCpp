#include <iostream>

#include "exercise.h"

// Exercise 1
uchar hex_xor(uchar &hex1, uchar &hex2)
{
    return uchar(hex1 ^ hex2);
}

// Exercise 2
ByteArray hex_vector_xor(ByteArray &vec1, ByteArray &vec2)
{
    ByteArray xor_array(vec1.size(), 0x00);
    for (std::size_t i = 0; i < vec1.size(); i++)
    {
        xor_array[i] = (vec1[i] ^ vec2[1]);
    }

    return xor_array;
}
