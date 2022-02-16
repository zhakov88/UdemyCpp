#include <fstream>
#include <iostream>
#include <string>

std::string read_text(const std::string &path)
{
    std::string str;
    std::string text;

    std::ifstream iffile;
    iffile.open(path);

    if (iffile.is_open())
    {
        while (std::getline(iffile, str))
        {
            text += str + "/n";
        }
    }

    iffile.close();
    return text;
}

void write_text(const std::string &path, const std::string &text)
{
    std::ofstream offile;
    offile.open(path);

    if (offile.is_open())
    {
        offile << text;
    }

    offile.close();
}

int main()
{
    std::string text = read_text("Text.txt");
    std::cout << text << std::endl;

    std::string serch_str = "drei";
    auto idx = text.find(serch_str);
    std::cout << idx << std::endl;

    if (idx != std::string::npos)
    {
        std::cout << "Found!" << std::endl;
    }
    else
    {
        std::cout << "Not found!" << std::endl;
    }

    std::string text2 = "abab";

    std::string serch_str2 = "ab";
    auto idx2 = text2.rfind(serch_str2);
    std::cout << "rfind: " << idx2 << std::endl;

    auto idx3 = text2.find_first_not_of(serch_str2);
    std::cout << "find_first_not_of: " << idx3 << std::endl;

    auto idx4 = text2.find_last_not_of(serch_str2);
    std::cout << "find_last_not_of: " << idx4 << std::endl;

    auto idx5 = text2.find_first_of(serch_str2);
    std::cout << "find_first_of: " << idx5 << std::endl;

    auto idx6 = text2.find_last_of(serch_str2);
    std::cout << "find_last_of: " << idx6 << std::endl;

    return 0;
}
