#include <iostream>

int main()
{
    int row, col, i = {}, j = {};

    std::cout << "No. of Rows: ";
    std::cin >> row;

    std::cout << "No. of Columns: ";
    std::cin >> col;

    while (i < row)
    {
        while (j < col)
        {
            std::cout << "*";
            j = j + 1;
            if (j == col - 1)
            {
                std::cout << "*" << std::endl;
                j = j + 1;
            }
        }
        j = 0;
        i = i + 1;
    }
}