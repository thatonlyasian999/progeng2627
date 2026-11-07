#include <iostream>
#include <fstream>

int main()
{
    std::ifstream infile;
    infile.open("input4.txt");

    int num{};

    if (infile.is_open())
    {
        int tmp;

        while (infile >> tmp)
        {   
            num += tmp;
            std::cout << tmp << std::endl;
        }

        infile.close();
    }
    else
    {
        std::cout << "error opening file " << std::endl;
    }

    std::cout << num; 
}