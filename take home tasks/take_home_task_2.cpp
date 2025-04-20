#include <iostream>
using namespace std;

bool isEven(int);


main() {
	int dig;
	
	cout <<"Enter digit to chech for even/odd:\n";
	cin >> dig;
	
	if (isEven(dig)) cout<<"The given digit is Even";
	else cout<<"The given digit is Odd";
	
}


bool isEven(int dig) {
	if (dig%2==0 && dig!=0) return true;
	return false;
}

