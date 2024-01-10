#include <iostream>
using namespace std;



// Note: The constructor has the same name as the class, it is always public, and it does not have any return value.


class constr {
    public:
    constr() {
        cout << "HELLO Constructors"<<endl;
    }
};


int main() {
    constr object;

    return 0;
}