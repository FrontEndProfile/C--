#include <iostream>
using namespace std;


class car {
    int id;
 public:
    string name;
    string brand;
    int year;
};

int main() {
    car bmw;
    bmw.brand = "I7e";
    bmw.name = "BMW";
    bmw.year = 2022;

    car Ford;
    Ford.name = "Ford";
    Ford.brand = "Mustang";
    Ford.year = 1998;


    // get full data from class with public 

    cout << bmw.name << " " << bmw.brand << " " << bmw.year <<endl;
    cout << Ford.name << " " << Ford.brand << " " << Ford.year <<endl;

}