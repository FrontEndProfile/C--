#include <iostream>
using namespace std;


int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	// int myNum[] = {1,0,-1,2,3,4,5};


	// for (int i = 0; i < sizeof(myNum) / sizeof(myNum[0]); ++i){
	// 	cout << "Print index : " << i <<endl;
	// }



	    int myNum[] = {1, 0, -1, 2, 3, 4, 5};
    int n = sizeof(myNum) / sizeof(myNum[0]);

    bool found = false;

    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (myNum[i] + myNum[j] + myNum[k] == 0) {
                    cout << "Found: " << myNum[i] << ", " << myNum[j] << ", " << myNum[k] << endl;
                    cout << "Total sum of : " << myNum[i] + myNum[j] + myNum[k];

                    found = true;
                }
            }
        }
    }



	// cout << "Print total 3 number of Zero :=- " << myNum[2];




	return 0;
}