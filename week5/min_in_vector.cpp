#include <iostream>
#include <vector>


double min_finder(const std::vector<double>& vin){
    int size = vin.size();
    

    if (size != 0){
        double smallest = vin[0];
        for (int i = 1; i < size; i++){
            if(smallest > vin[i]){
                smallest = vin[i];
            }
        }
        return smallest;
    } else {
        return -1;
    }
    
    
}

int main(){
    std::vector<double> v1{2.3,4.2,2.1};
    std::vector<double> v2{2.3,2.1,1.3};
    std::vector<double> v3{};


    
    std::cout << "V1: " << min_finder(v1) << std::endl;
    std::cout << "V2: " << min_finder(v2) << std::endl;
    std::cout << "V3: " << min_finder(v3) << std::endl;

}