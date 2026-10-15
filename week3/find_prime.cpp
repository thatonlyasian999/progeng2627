#include <iostream>

int main()
{
    int n;
    bool found_factor = false;

    std::cout << "Enter your number: ";
    std::cin >> n;

    for (int cf = 2; cf < n; cf++)
    {
        if (n % cf == 0)
        {
            found_factor = true;
        }
    }

    if (found_factor)
    {
        std::cout << "A factor is found..." << std::endl;
    }
    else
    {
        std::cout << "No factor has been founded..." << std::endl;
    }
}