#include <iostream>
using namespace std;


int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	// Switch Case 

	int num1 , num2 ;
	char op;

	cin >> num1 >> op >> num2;
 

	switch(op){
	case '+' : cout << num1 + num2 <<endl; break;
	case '-' : cout << num1 - num2 <<endl; break;
	case '*' : cout << num1 * num2 <<endl; break;
	case '/' : cout << num1 / num2 <<endl; break;
	default: cout << "Please entre vaild values";
	}


	return 0;
}