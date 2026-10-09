#include <iostream>

int main(){
    double n, absv;

    std::cout << "Enter your number: " << std::endl;
    std::cin >> n;

    if (n < 0){
        std::cout << "Absolute Value will make the negative value possitive..." << std::endl;
        absv = -n;
        std::cout << "The value is now " << absv << " " << std::endl;
    } else {
        std::cout << "Absolute Value is the same as before..." << std::endl;
    }
}