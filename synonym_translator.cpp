#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>


int main(){
    std::vector<std::string> synonym_dict , input_vector, output_vector;

    std::ifstream input_file, synonym_file;
    std::ofstream translated_file;

    input_file.open("advertisement.txt");
    synonym_file.open("synonym.txt");
    translated_file.open("output.txt");

    if(!input_file.is_open() || !synonym_file.is_open() || !translated_file.is_open()){
        std::cout << "can't open the file... exiting" << std::endl;
        return EXIT_FAILURE;
    }

    std::string temp;
    while(input_file >> temp){
        input_vector.push_back(temp);
    } // add the input file into the input vector

    while(synonym_file >> temp){
        synonym_dict.push_back(temp);
    } // add the synonym file into the synonym vector

    for(int i = 0; i < input_vector.size() ; i++){
        for(int j = 0; j < synonym_dict.size(); j++){
            if(input_vector[i] == synonym_dict[j]){
                output_vector.push_back(synonym_dict[j+1]); // adjacent word is the synonym
            } else if (j = synonym_dict.size()-1){
                output_vector.push_back(input_vector[i]); // can't find the word so it gets sent into output wihtout being translated
            }
        }
    }

    for(int i = 0; i < output_vector.size(); i++){
        translated_file << output_vector[i] << " ";
    }
}