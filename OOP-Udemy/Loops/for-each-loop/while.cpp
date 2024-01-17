#include <iostream>
using namespace std;


int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	// While looop 
	int steps = 0;
	while(steps < 10){
		cout << "Walking a step " << steps << endl;
		steps = steps + 1;
	}

	cout << "Final Step count out of while loop : "<<steps;


	return 0;
}