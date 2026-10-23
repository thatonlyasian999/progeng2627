#include <iostream>
double biggest_num(double x, double y, double z)
{
    double answer;
    if ((x > y) && (x > z))
    {
        answer = x;
    }
    else if ((z > y) && (z > x))
    {
        answer = z;
    }
    else if ((y > x) && (y > z))
    {
        answer = y;
    }
    else
    {
        answer = {};
        std::cout << "Error... either 2 or more numbers are equal." << std::endl;
    }

    return answer;
}

int main()
{
    double x, y, z;

    std::cout << "Enter your first number: " << std::endl;
    std::cin >> x;
    std::cout << "Enter your second number: " << std::endl;
    std::cin >> y;
    std::cout << "Enter your third number: " << std::endl;
    std::cin >> z;

    std::cout << "The largest number out of the 3 is " << biggest_num(x, y, z) << std::endl;
}