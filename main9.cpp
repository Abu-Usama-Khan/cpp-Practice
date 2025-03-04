#include <iostream>
using namespace std;

int main() {
	int ite = 0;
	for (int i=1; i<50; i+=i%5) {
		ite++;
		cout << i<<endl;
	}
	cout << ite;
}

//	int num, num2, lim=1;
//	cout << "Enter Number to reverse"<<endl;
//	cin >> num;
//	num2 = num;
//	while (num2>0) {
//		lim*=10;
//		num2/=10;
//	}
//	lim/=10;
//	while (lim>1) {
//		revNum = num2/lim;
//		num2 = num2%lim;
//		lim/=10;
//		
//	}
