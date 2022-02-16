
#include <vector>


using uchar = unsigned char;
using GrayscaleMatrix = std::vector<std::vector<uchar>>;

class Image
{
public:
    // Konstruktor
    Image();
    Image(const unsigned int width, const unsigned int hight);

    // Destruktor
    ~Image();

    // Getter
    void set_width(unsigned int new_width);
    void set_height(unsigned int new_height);

    // Setter
    unsigned int get_width() const;
    unsigned int get_heigt() const;

    void save_image(const char *file_name) const;

private:
    unsigned int m_width;
    unsigned int m_height;
    GrayscaleMatrix m_matrix;
};
