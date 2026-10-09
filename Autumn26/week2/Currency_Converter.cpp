#include <iostream>

int main(){
    double cash_GBP, cash_MYR, current_rate;

    std::cout << "Enter how much GBP do you want to conver to MYR: " << std::endl;
    std::cin >> cash_GBP;

    std::cout << "What is the rate of GBP to MYR: " << std::endl;
    std::cin >> current_rate;

    std::cout << "You will get " << cash_GBP * current_rate << " MYR." << std::endl;

}