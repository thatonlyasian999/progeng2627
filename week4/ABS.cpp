#include <iostream>

double myabs(double number);


int main()
{
    using namespace std;
    double n;

    cout << "please enter a number: " << endl;
    cin >> n;
    cout << "|" << n << "| = " << myabs(n) << endl;
}

double myabs(double number){

    double abs; 

    if (number < 0){
        abs = - number;
    } else {
        abs = number;
    }

    return abs;
}
