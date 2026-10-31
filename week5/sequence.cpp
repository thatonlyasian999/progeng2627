#include <iostream>
#include <vector>

int main()
{
    std::vector<int> sequence; // Make a vector with size 0, so you need to push back all of them, cant pass it to the exact index as it'll be UNDEFINED.

    int tmp = 1;

    while (tmp != 0)
    {
        std::cout << "Enter a number (0 - temrinates the program): " << std::endl;
        std::cin >> tmp;
        sequence.push_back(tmp);
    }

    std::cout << "Your sequnece is..." << std::endl;

    for (int i = 0; i < sequence.size(); i++)
    {
        std::cout <<"Index " << i << ": " << sequence[i] << std::endl;
    }

    std::cout << "Reverse order... " << std::endl;

    for (int i = sequence.size() - 1; i >= 0; i--){
        std::cout <<"Index " << i << ": " << sequence[i] << std::endl;
    }
}