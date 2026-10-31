#include <iostream>
#include <vector>

int main()
{
    int n, s, temp, count{};
    std::vector<int> v, c;
    std::cout << "please enter n: " << std::endl;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cout << "please enter a number: " << std::endl;
        std::cin >> temp;
        v.push_back(temp);
    }

    std::cout << "please enter s:" << std::endl;
    std::cin >> s;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == s)
        {
            count += 1;
            c.push_back(i);
        }
    }

    if(count == 0){
        std::cout << "there are no occurrences of " << s << std::endl;
    } else {
        std::cout << "there are " << count << " occurrences of " << s << std::endl;
        for (int i = 0; i < c.size(); i++){
            std::cout << c[i] << std::endl;
        }

    }
}