#include <iostream>
#include <string>

int main(){
    using namespace std;
    double length_in, length_out;
    string unit_in, unit_out;

    const double mile_to_km = 1.609;

    cin >> length_in >> unit_in;

    if (unit_in == "km"){
        unit_out = "mile";
        length_out = length_in / mile_to_km;
    } else if (unit_in == "mile"){
        unit_out = "km";
        length_out = length_in * mile_to_km;
    } else {
        cout << "Undefined unit..." << endl;
        unit_out = "null";
        length_out = 0;
    }

    cout << length_out << " " << unit_out << endl;

}