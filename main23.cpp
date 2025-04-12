#include <iostream>
using namespace std;

int square(int);
int cube(int);
int general(int, int);

int main() {
	int digit, exp;
	cout <<"Enter Digit to find its exponent values:\n";
	cin >> digit;
	cout <<"Enter exponent value:\n";
	cin >> exp;
	cout << "The Square of " << digit <<" is " <<square(digit) <<endl;
	cout << "The cube of " << digit <<" is " <<cube(digit) <<endl;
	cout << "The exponent of " << digit <<" is " <<general(digit, exp) <<endl;
}

int square(int val) {
	return val*val;
}

int cube(int val) {
	return val*val*val;
}

int general(int val, int lim) {
	int tempVal=val;
	for (int i=2; i<=lim; i++) {
		val*=tempVal;
	}
	return val;
}


// Factorial through recursive function

//#include <iostream>
//using namespace std;
//
//int fact(int);
//
//int main() {
//	int digit;
//	cout <<"Enter Digit for Factorial:\n";
//	cin >> digit;
//	cout << "The Factorial of " << digit <<" is " <<fact(digit);
//}
//
//int fact(int dig) {
//	if(dig>0)
//		return dig*fact(dig-1);
//	else {
//		return 1;
//	}
//}
