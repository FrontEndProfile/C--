#include <iostream>
using namespace std;


int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int mylaps;

	// cin>>mylaps;

	// if (mylaps <= 3){

	// 	if (mylaps == 2){
	// 	  cout<< "One Laps is Remains" << endl;
	// 	} 
	// 	if(mylaps == 1){
	// 	  cout<< "Two Laps is Remains" << endl;
	// 	} 
	// 	if(mylaps == 0){
	// 	  cout<< "please complete all Laps !" << endl;
	// 	}

	// 	cout<< "Keep Do It!"<< endl;
	// }else {
	// 	cout<<"Enter Valid Number like [ 1 , 2 , 3 for laps ] "<< endl;
	// }


	// if (mylaps <= 3){
	// 	if(mylaps == 2){
	// 		cout << "One Lap remains" << endl;
	// 	}
	// 	if(mylaps == 1){
	// 		cout << "Two Lap remains" << endl;
	// 	}
	// 	if(mylaps == 0){
	// 		cout << "Please complete all laps!" << endl;
	// 	}
	// 	cout<< "Keep Do It!" <<endl;
	// }else {
	// 	cout << "Enter a valid number like [1, 2, 3 for laps]" << endl;
	// }


    // Even calculator number only...

    int num1 , num2;

    cin>>num1 >> num2;

    // checking if even then true 
    if(num1 % 2 == 0 && num2 % 2 == 0){
    	// when true then start calculator additions values 
    	int result = num1 + num2;

    	cout << "The sum of the two even numbers is: " << result;   	
    }else 
    cout<< "At least one of the entered numbers is not even. Terminating program.";


	return 0;
}