#include <iostream>

int main()
{
    using namespace std;

    double x, acc = {};
    int i = 0, n = {};

    cin >> x >> n;

    while (i < n)
    {
        acc = acc + x;
        i = i + 1;
    }

    cout << acc << endl;
}