#include <iostream>
#include <string>

int main(){
    std::cout << "Hello" << std::endl;
    std::cout << "What is your name: ";
    std::string user_name, surname;
    std::cin >> user_name;
    std::cout << "What is your surname: ";
    std::cin >> surname;
    std::cout << "Goodbye, " << user_name << " " << surname;
}