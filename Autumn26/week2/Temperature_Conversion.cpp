#include <iostream>

int main(){

    using namespace std;
    double length_in, length_out;
    string unit_in, unit_out;

    bool valid_unit = true; 

    cin >> length_in >> unit_in;

    if ((unit_in == "F") || (unit_in == "f")){
        unit_out = "C";
        length_out = (length_in - 32) * 5/9 ;
    } else if ((unit_in == "C") || (unit_in == "c")){
        unit_out = "F";
        length_out = (length_in * 9/5) + 32;
    } else {
        valid_unit = false;
    }


    if (valid_unit){
        cout << length_out << " " << unit_out << endl;
    } else {
        cout << "Undefined Unit of measurement..." << endl;
    }
    
}