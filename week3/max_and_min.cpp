#include <iostream>

int main()
{
    int max, min, num;

    std::cout << "Enter your number: ";
    std::cin >> num;

    max = num;
    min = num;

    std::cout << "maximum so far: " << max << std::endl;
    std::cout << "minimum so far: " << min << std::endl;
    while (num != 0)
    {
        std::cout << "Enter your number: ";
        std::cin >> num;

        if (num < min)
        {
            min = num;
        }
        else if (num > max)
        {
            max = num;
        }
        std::cout << "maximum so far: " << max << std::endl;
        std::cout << "minimum so far: " << min << std::endl;
    }
}