#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

/*int main(){
    std::ifstream infile;
    std::ofstream outfile;

    infile.open("input4.txt");
    outfile.open("output.txt");

    std::vector <int> v;

    if(!infile.is_open() || !outfile.is_open()){
        std::cout << "ERROR IN OPENING THE FILE.. EXITING" << std::endl;
        return EXIT_FAILURE;
    }

    int temp;
    while(infile >> temp){
        v.push_back(temp);
    }

    infile.close();

    for(int i = v.size() - 1; i >= 0; i--){
        outfile << v[i] << std::endl;
    }

    outfile.close();
}*/


int main(){
    std::ifstream infile;
    std::ofstream outfile;
    std::string in_name, out_name;

    std::cout << "Enter the Input file name: " << std::endl;
    std::cin >> in_name;

    std::cout << "Enter the Output file name: " << std::endl;
    std::cin >> out_name;

    infile.open(in_name);
    outfile.open(out_name);

    std::vector <int> v;

    if(!infile.is_open() || !outfile.is_open()){
        std::cout << "ERROR IN OPENING THE FILE.. EXITING" << std::endl;
        return EXIT_FAILURE;
    }

    int temp;
    while(infile >> temp){
        v.push_back(temp);
    }

    infile.close();

    for(int i = v.size() - 1; i >= 0; i--){
        outfile << v[i] << std::endl;
    }

    outfile.close();
}
