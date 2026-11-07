#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

/*
int main()
{
    std::ifstream infile;
    infile.open("input4.txt");

    std::vector<int> vout;

    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        vout.push_back(tmp);
    }

    infile.close();

    for(int i = vout.size()-1; i >= 0; i--){
        std::cout << vout[i] << std::endl;
    }

}

*/

int main()
{
    std::ifstream infile;
    infile.open("text.txt");

    std::vector<std::string> vout;

    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >> tmp){
        vout.push_back(tmp);
    }

    infile.close();

    for(int i = vout.size()-1; i >= 0; i--){
        std::cout << vout[i] << std::endl;
    }

}