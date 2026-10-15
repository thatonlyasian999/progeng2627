#include <iostream>

int main()
{
    int n;
    std::cout << "Enter your number: ";
    std::cin >> n;

    while (n != 0)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            std::cout << "Divided by 2, EVEN" << std::endl;
        }
        else
        {
            n = 3*n + 1;
            std::cout << "Times 3 + 1, ODD" << std::endl;
        }

        if (n == 1)
        {
            std::cout << "Solved to one..." << std::endl;
            std::cout << "Enter your number: ";
            std::cin >> n;
        }
    }
}