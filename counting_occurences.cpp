#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> long_text, search_words;
    std::vector<int> output_num;

    std::ifstream long_file, search_file;
    std::ofstream out_file;

    long_file.open("long_file.txt");
    search_file.open("search.txt");
    out_file.open("output_for_count.txt");

    if(!long_file.is_open() || !search_file.is_open() || !out_file.is_open()){
        std::cout << "can't open the file... exiting" << std::endl;
        return EXIT_FAILURE;
    }

    std::string temp;
    while(long_file >> temp){
        long_text.push_back(temp);
    }

    while(search_file >> temp){
        search_words.push_back(temp);
    }


    for(int i = 0; i < search_words.size(); i++){ // loop all search words each for all words in the long txt
        int count {};
        for(int j = 0; j < long_text.size(); j++){
            if(search_words[i] == long_text[j]){
                count++; // finds the no. of occurence
            }
        }
        output_num.push_back(count); // puts the no. of occurence into a vector
    }


    for(int i = 0; i < output_num.size() ; i++){
        out_file << search_words[i] << ": " << output_num[i] << std::endl; // append the search words with the no. of occurence into each line for the output file.
    }

}