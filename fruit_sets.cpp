#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int search_vector(std::string s, const std::vector<std::string>& vin){
    for(int i = 0; i < vin.size(); i++){
        if(s == vin[i]){
            return i;
        }
    }

    return -1;
}


void union_vector(const std::vector<std::string>& ware1, const std::vector<std::string>& ware2, std::vector<std::string>& vout){
    for(int i = 0; i < ware1.size(); i++){
     vout.push_back(ware1[i]);
    }

    for(int i = 0; i < ware2.size(); i++){
        if(search_vector(ware2[i],ware1) == -1){
            vout.push_back(ware2[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& ware1, const std::vector<std::string>& ware2, std::vector<std::string>& vout){
    for(int i = 0; i < ware1.size(); i++){
        if(search_vector(ware1[i], ware2) != -1){
            vout.push_back(ware2[search_vector(ware1[i], ware2)]);
        }
    }

}


int main()
{
    std::vector<std::string> ware1, ware2, union1, intersection;

    std::ifstream in_1file, in_2file;
    std::ofstream out_1file, out_2file;

    in_1file.open("warehouse1.txt");
    in_2file.open("warehouse2.txt");
    out_1file.open("union.txt");
    out_2file.open("intersection.txt");

    if(!in_1file.is_open() || !in_2file.is_open() || !out_1file.is_open() || !out_2file.is_open()){
        std::cout << "EXITING FUNCTION... " << std::endl;
        return EXIT_FAILURE;
    }
    std::string temp;
    while (in_1file >> temp)
    {
        ware1.push_back(temp);
    } // Put data of warehouse 1 into vector (ware1)

    while (in_2file >> temp)
    {
        ware2.push_back(temp);
    } // Put data of warehouse 2 into vector (ware2)

    union_vector(ware1, ware2, union1); // Sort to get UNION
    intersection_vector(ware1, ware2, intersection); // Sort to get interection


    for(int i = 0; i < union1.size(); i++){
        out_1file << union1[i] << std::endl;
    }

    for(int i = 0; i < intersection.size(); i++){
        out_2file << intersection[i] << std::endl;
    }

    in_1file.close(); 
    in_2file.close(); 
    out_1file.close(); 
    out_2file.close();


}