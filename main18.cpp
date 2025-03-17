#include <iostream>
using namespace std;

int larNum(int num1, int num2, int num3);

int main() {
	int a,b,c, res;
	cout << "Enter Number 1 to check for larger one: ";
	cin >> a;
	cout << "Enter Number 2 to check for larger one: ";
	cin >> b;
	cout << "Enter Number 3 to check for larger one: ";
	cin >> c;
	res = larNum(a,b,c);
	if (res==0) {
		cout << "All are equal";
	} else {
		cout << "The Largest number is: " << res;
	}
}

int larNum(int num1, int num2, int num3) {
	if (num1==num2 && num2==num3) {
		return 0;
	} else if (num1>num2 && num1>num3) {
		return num1;
	} else if (num2>num1 && num2>num3) {
		return num2;
	}  else {
		return num3;
	}
}
