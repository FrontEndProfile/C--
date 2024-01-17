#include <iostream>
using namespace std;


int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int marks;
	cin >> marks;

	if (marks > 80) {
		cout << "Grade A"<<endl;
	}
	else if (marks > 70) {
		cout << "Grade B"<<endl;
	}
	else if (marks > 60) {
		cout << "Grade C"<<endl;
	}else {
		cout << "you are Jagoe..."<<endl;
	}


	return 0;
}