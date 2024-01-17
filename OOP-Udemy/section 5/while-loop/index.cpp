#include <iostream>
using namespace std;


int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int num;
	// fill the user any number 
	cin >> num;

	int i = num;
	while(i > 0){
		if (i > num){
		  cout << i << "true" <<endl;
		  
		}else {
			break;
		}
		i++;
	}

	return 0;
}