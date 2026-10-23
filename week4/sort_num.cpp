#include <iostream>

void mysort(double &x, double &y, double& z)
{
    double temp;
    if ((x > y) && (x > z))
    {
        temp = x;
        if(y > z){
            x = z;
            z = temp;

        } else {
            x = y;
            y = z;
            z = temp;
        }
    } else if ((y > x) && (y > z)) {
        temp = y;
        if(x > z){
            y = x;
            x = z;
            z = temp;
        } else {
            y = z;
            z = temp;
        }

    } else {
        if (x > y){
            temp = x;
            x = y;
            y = temp;
        }
    }
}

int main()
{
    double x, y, z;
    std::cin >> x >> y >> z;

    
    mysort(x, y, z);
    std::cout << "Sort is complete" << std::endl;
    std::cout << x << " " << y << " " << z;
}