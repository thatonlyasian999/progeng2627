#include <iostream>
#include <vector>

void merge_vectors_int(std::vector<int> &v1, const std::vector<int> &v2, std::vector<int> &merged)
{
    int j = 0;
    for(int i = 0; i < v1.size(); i++){
        if(v1[i] >= v2[j]){
            merged.push_back(v2[j]);
            j++;
            i--; // add V2 instead of V1; and keep i the same
        } else {
            merged.push_back(v1[i]); // when V1 is all inside the merged vector, the leftovers are the sorted v2 which goes to merged vector.
            if(i == v1.size()-1){ 
                for(int k = j; k < v2.size(); k++){ 
                    merged.push_back(v2[k]);
                }
            }
        }
    }
}

int main()
{

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if (out == expected_output)
    { // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else
    {
        std::cout << "not passed" << std::endl;
        std::cout << "The vector is" << std::endl;
        for(int i = 0; i < out.size() ; i++){
            std::cout << out[i] << std::endl;
        }
    }
}