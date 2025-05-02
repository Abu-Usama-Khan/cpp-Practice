#include <iostream>
using namespace std;

int avg(int, int);

main() {
	int dig1, dig2;
	cout <<"Enter number " <<1 <<": ";
	cin >>dig1;
	cout <<"Enter number " <<2 <<": ";
	cin >>dig2;
	int average = avg(dig1, dig2);
	cout <<"The Average of given 2 numbers is: " <<average;
}

int avg(int num1, int num2) {
	return ((num1+num2)/2);
}
