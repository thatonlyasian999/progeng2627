#include <iostream>
#include <string>
#include <vector>

// for std::pair
#include <utility>


std::string char_to_string(char c)
{
    std::string s;
    s.push_back(c);
    return s;
}

std::string delete_space(std::string s){
    std::string b{};
    for(int i = 0; i < s.size(); i++){
        if(s[i] != ' '){
            b.push_back(s[i]);
        }
    }
    return b;
}

bool is_palindrome(std::string s){
    bool test {true};
    for(int i = 0; i < s.size()/2; i++){
        if(s[i] != s[s.size()- 1 - i]){
            test = false;
        }
    }
    return test;
} 



int main()
{
    std::vector<std::pair<std::string, bool>> test_cases = 
{
        {"a man a plan a canal panama", true}, 
        {"a man plan a canal panama", false},
        {"a toyota", true},
        {"never odd or even", true},
        {"never even or odd", false}
    };

    for(int i = 0; i < test_cases.size(); i++){
        // each variable of type std::pair has two fields called first and second

        bool test = is_palindrome(delete_space(test_cases[i].first));

        if(test == test_cases[i].second){
            std::cout << "passed" << std::endl;
        }
        else{
            std::cout << "FAILED" << std::endl;
            std::cout << test_cases[i].first << std::endl;
            std::cout << "expected: " << test_cases[i].second << std::endl;
            std::cout << "got: " << test << std::endl;
        }
    }
}
