#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::cout << "Enter path to file: ";
    std::string path;
    std::cin >> path;
    
    std::fstream file;
    file.open(path);
    if (file.is_open())
    {
        std::string temp;
        while (!file.eof())
        {
            std::getline(file, temp);
            std::cout << temp << std::endl;
        }
        file.close();
    }
    else
        std::cout << "File not found" << std::endl;
}
