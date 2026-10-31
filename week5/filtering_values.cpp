#include <iostream>
#include <vector>

void filter_v(const std::vector<double> &vin, double t, std::vector<double> &vout)
{
    for (int i = 0; i < vin.size(); i++)
    {
        if (vin[i] < t)
        {
            vout.push_back(vin[i]);
        }
    }
}

int main()
{

    std::vector<double> vin{2.1, 4.2, 5.4, 6.4, 1.1, 5.6, 7.7, 88};
    std::vector<double> vout{};

    double t{};
    std::cout << "Enter t: " << std::endl;
    std::cin >> t;
    filter_v(vin, t, vout);

    std::cout << "vout: {";
    for (int i = 0; i < vout.size() - 1; i++)
    {
        std::cout << vout[i] << " ";
    }
    std::cout << vout[vout.size() - 1] << "}";
}