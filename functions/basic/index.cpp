#include <iostream>
using namespace std;

void Greet(string  name="Dummy"){
    cout << "HI "<< name <<endl;
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

    Greet("Fazal");
    Greet("98");
    Greet();


	return 0;
}