#include <iostream>

int main(){
    double length1, length2, sum;

    std::cout <<"Enter the length for the first side: " << std::endl;
    std::cin >> length1;

    std::cout <<"Enter the length for the second side: " << std::endl;
    std::cin >> length2;

    sum = 2*(length1 + length2);

    std::cout << "The perimeter of the rectangle is " << sum << std::endl;
}