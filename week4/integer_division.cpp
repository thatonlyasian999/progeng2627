#include <iostream>

void division(int x, int y)
{
    int value = x / y;
    int mod = x % y;

    std::cout << "The Quotient is: " << value << " the remainder is " << mod << std::endl;
}

int main()
{
    division(8, 3);
}