#include <iostream>

int main()
{
    bool statement = true;
    std::string n;

    std::cin >> n;

    while (statement)
    {
        if ((n == "STOP") || (n == "stop") || (n == "Stop"))
        {
            statement = false;
        }

        std::cout << n << std::endl;
        std::cin >> n;
    }

    std::cout << "You got out of the program..." << std::endl;
}