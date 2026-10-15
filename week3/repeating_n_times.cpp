#include <iostream>

int main()
{
    int n, i = 0;

    std::string word;

    std::cin >> word;
    std::cin >> n;

    while (i < n)
    {
        std::cout << word << std::endl;
        i = i + 1;
    };
}