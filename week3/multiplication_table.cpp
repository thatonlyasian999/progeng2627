#include <iostream>

int main()
{
    int num, row, i = {}, j = {1};

    std::cout << "Number: ";
    std::cin >> num;

    row = num;
    int count = 1;

    while (i < row)
    {
        while (j < num + 1)
        {
            std::cout << j * count;
            std::cout << " ";
            j = j + 1;
            if (j == num )
            {
                std::cout << j * count << std::endl;
                j = j + 1;
            }
        }
        j = 1;
        count = count + 1;
        i = i + 1;
    }
}