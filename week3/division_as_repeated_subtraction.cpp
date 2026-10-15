#include <iostream>

int main()
{

    int n1, n2, acc = {};

    std::cout << "First number: ";
    std::cin >> n1;

    std::cout << "Second numner (subtract with this number): ";
    std::cin >> n2;

    std::cout << "we want to perform the integer division of " << n1 << " by " << n2 << std::endl;
    while (n1 > n2)
    {
        std::cout << n1 << " is greater than " << n2 << " so we subtract " << n2 << " from " << n1 << " we get " << n1 - n2 << std::endl;
        n1 = n1 - n2;
        acc = acc + 1;
    }

    std::cout << n1 << " is not greater than " << n2 << " so we terminate the loop" << std::endl;
    std::cout << "the quotient is the number of subtractions (" << acc << ")" << std::endl;
    std::cout << "the remainder is the number we have left at the end (" << n1 << ")" << std::endl;
}