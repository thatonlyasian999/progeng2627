#include <iostream> 

int main(){
    using namespace std;
    int years;

    cout << "Enter your year: " << endl;
    cin >> years;

    if (years % 4 == 0){

        if(years % 400 == 0){
            cout << "A leap year as its a mutiple of 4 and its a mutiple of 400." << endl;
        } else if (years % 100 != 0) {
            cout << "A leap year as its a mutiple of 4 and not 100." << endl;
        } else {
            cout << "A multiple of 4 but not a leap year." << endl;
        }
    } else {
        cout << "Not a leap year." << endl;
    }
}