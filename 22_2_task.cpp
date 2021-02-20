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
        char temp[11];
        int sizeForRead = sizeof(temp) - 1;
        file.seekg(0, std::ios::end);
        int sizeLeft = file.tellg();
        file.seekg(0, std::ios::beg);

        while (sizeLeft > sizeForRead)
        {
            file.read(temp, sizeForRead);
            temp[sizeForRead] = 0;
            std::cout << temp;
            sizeLeft -= sizeForRead;
        }
        file.read(temp, sizeLeft);
        temp[sizeLeft] = 0;
        std::cout << temp;

        file.close();
    }
    else
        std::cout << "File not found" << std::endl;

    std::cout << std::endl;
}
