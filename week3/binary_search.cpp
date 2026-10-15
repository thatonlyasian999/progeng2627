#include <iostream>

int main()
{
    int n, max, min;
    std::string choice;
    std::cout << "Enter your max ramge: ";
    std::cin >> max;

    std::cout << "Enter your min ramge: ";
    std::cin >> min;

    while (choice != "solved")
    {
        n = (max + min) / 2;

        std::cout << "Is your number higher or lower than: " << n << ", say |solved| |higher| |lower| :";
        std::cin >> choice;

        if (choice == "higher")
        {
            min = n + 1;
        }
        else if (choice == "lower")
        {
            max = n - 1;
        }
        else if (choice != "solved")
        {
            std::cout << "No idea what you've said..." << std::endl;
        }
    }

    std::cout << "Solved your answer is: " << n;
}