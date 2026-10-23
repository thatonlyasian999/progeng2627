#include <iostream>
#include <cmath>

double mypow(double base, int exponent){ //Own Simplified POW
    double answer{1};
    if (exponent > 0){
        for (int i = 1; i <= exponent; i++){
        answer *= base;
    }
    } else {
        for (int i = -1; i >= exponent; i--){
        answer /= base;
    }
    }


    return answer;
}

double Sum_Of_Pow(double x, int n){
    double acc;

    for (int i = 1; i <= n; i++) 
    {
        acc += std::pow(x, i);
    }

    return acc;
}

int main() // Summation of Power
{
        double x, acc{};
    int n;
    std::cout << "This is the sum of power, where n is the number of times it iterate and x is the base, Enter X (can be a a float): " << std::endl;
    std::cin >> x;
    std::cout << "Enter n (integer): " << std::endl;
    std::cin >> n;

    /*for (int i = 1; i <= n; i++) 
    {
        acc += std::pow(x, i);
    } Algorithm not in the function, the older ver */

    std::cout << "The sum of the summation is: " << Sum_Of_Pow(x,n) << std::endl; 


}