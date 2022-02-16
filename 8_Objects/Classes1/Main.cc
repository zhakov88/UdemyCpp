#include <iostream>

#include "Image.h"

int main()
{
    Image my_image(100, 400);
    my_image.save_image("image.bmp");

    std::cout << "Height: " << my_image.get_heigt() << std::endl;
    my_image.set_height(200);
    std::cout << "Height: " << my_image.get_heigt() << std::endl;

    return 0;
}
