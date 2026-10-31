#include <iostream>
#include <vector>

double num_finder(double n, const std::vector<double> &vin)
{
    int size = vin.size();

    if (size != 0)
    {
        for (int i = 0; i < size; i++)
        {
            if (vin[i] == n)
            {
                return i;
            }
        }
        return -1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    std::vector<double> v1{2.3, 4.2, 2.1};
    std::vector<double> v2{2.1, 2.3, 1.3};
    std::vector<double> v3{};
    std::vector<double> v4{2.2, 2.1, 2.3};
    std::vector<double> v5{2.2, 2.1, 2.3, 2.3};
    std::vector<double> v6{2.2, 2.1, 2.3, 2.3};
    

    std::cout << "V1: " << num_finder(2.3, v1) << std::endl;
    std::cout << "V2: " << num_finder(2.3, v2) << std::endl;
    std::cout << "V3: " << num_finder(2.3, v3) << std::endl;
    std::cout << "V4: " << num_finder(2.3, v4) << std::endl;
    std::cout << "V5: " << num_finder(2.3, v5) << std::endl;
    std::cout << "V6: " << num_finder(1, v6) << std::endl;
}