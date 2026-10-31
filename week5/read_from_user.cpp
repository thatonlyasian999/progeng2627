#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    int n, temp, t;

    std::cout << "Enter the amount of number do you want to put inside the vector: " << std::endl;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter the number: " << std::endl;
        std::cin >> temp;
        v.push_back(temp);
    }

    std::cout <<"What number do you want to compare with: " << std::endl;
    std::cin >> t;
    std::cout << "The number smaller than " << t << " is: " << std::endl;

    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] < t)
        {
            std::cout << v[i] << std::endl;
        }
    }
}