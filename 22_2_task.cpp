#include <iostream>
#include <fstream>

int main()
{
    std::cout << "Enter path to file: ";
    std::string path;
    std::cin >> path;
    
    std::ifstream file;
    file.open(path, std::ios::binary);
    if (file.is_open())
    {
        char temp[2];
        while (file.read(temp, sizeof(temp) - 1))
        {
            temp[1] = 0;
            std::cout << temp;
        }
        file.close();
    }
    else
        std::cout << "File not found" << std::endl;

    std::cout << std::endl;
}
