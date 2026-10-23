#include <iostream>

/*int main()
{
    int x, y, temp;
    std::cout << "Enter x (integer)" << std::endl;
    std::cin >> x;
    std::cout << "Enter y (integer): " << std::endl;
    std::cin >> y;

    // Swapping here...
    temp = x;
    x = y;
    y = temp;

    std::cout << "Swap is complete x:" << x << " y:" << y << std::endl;
} */

void myswap(int& x, int& y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int x, y;
    std::cout << "Enter x (integer)" << std::endl;
    std::cin >> x;
    std::cout << "Enter y (integer): " << std::endl;
    std::cin >> y;

    myswap(x,y);
    std::cout << "Swap is complete x:" << x << " y:" << y << std::endl;
}