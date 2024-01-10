#include <iostream>
using namespace std;


class inside {
 public:
   void helloFun() {
    cout << "Hello Inside" <<endl;
   }
};

class outside {
   public:
    void helloText();
};

void outside::helloText() {
    cout << "Hello Outside" <<endl;
};

int main() {
    // Inside Method class 
    inside classInside;
    classInside.helloFun();

    // Outside Method class 
    outside classOutside;
    classOutside.helloText();


    return 0;
}