#include <iostream>

void smallest_factor(int n)
{
    int cf;
    bool found_factor = false;
    
    for (int cf = 2; cf < n; cf++)
    {

        if ((n % cf) == 0)
        { // n can be divided by cf...

            found_factor = true;
            //...it means we have found a factor!
        }
    }

    if (!found_factor)
    {
        std::cout << n << std::endl; // Show prime values
    }
}

void prime(int x, int y)
{
    for (x; x <= y; x++)
    {
        smallest_factor(x);
    }
}

int main()
{
    int x, y;
    std::cin >> x >> y;
    if (x < y)
    {
        prime(x, y);
    }
    else
    {
        std::cout << "First number must be smaller than second number... " << std::endl;
    }
}