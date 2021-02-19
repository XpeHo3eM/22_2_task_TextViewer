#include <iostream>
#include <fstream>

int main()
{
    std::cout << "Enter path to file: ";
    std::string path;
    std::cin >> path;

    std::fstream file;
    file.open(path);
    if (file.is_open())
    {
        char temp;
        while (!file.eof())
        {
            file >> temp;
            std::cout << temp;
        }
        file.close();
    }
    else
        std::cout << "File not found" << std::endl;
}
