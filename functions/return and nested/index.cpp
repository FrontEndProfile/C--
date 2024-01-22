#include <iostream>
using namespace std;

int sumofAmount(int a ,int  b , int c) {
    cout << "Sum of : " << a + b + c <<endl;
    return a + b + c;
}


int bringsFruits(int amout ,int appleQty ,int bananaQty ,int mangoQty){
    int applePrize = appleQty*100;
    int bananaPrize = bananaQty*30;
    int mangoPrize = mangoQty*60;

    int total = sumofAmount( applePrize , bananaPrize , mangoPrize);
    return amout - total;
}


int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

    // fruites caculator 

    int money = 580;
    int appleQty = 2;
    int bananaQty = 3;
    int mangoQty = 5;

    int blance = bringsFruits(money,appleQty,bananaQty,mangoQty);
    if (blance>0){
        cout << "Yess buy & remain is " << blance <<endl;
    }else {
        cout << "No buy & add more this amonut " << (-blance) <<endl;
    }


	return 0;
}