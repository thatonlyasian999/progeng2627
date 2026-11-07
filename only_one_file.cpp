#include <iostream>
#include <fstream>
#include <cstdlib>

int main(){
    std::ifstream infile;
    std::string file_name;
    std::cout << "Enter your file_name: ";
    std::cin >> file_name;

    if(file_name != "text.txt"){
        std::cout << "NOT THE SAME FILE... EXITING";
        return EXIT_FAILURE;
    } else {
        infile.open("text.txt");
        std::string tmp;
        if(infile.is_open()){
            while(infile >> tmp){
                std::cout << tmp << std::endl;
            }
        }
        infile.close();
    }
}