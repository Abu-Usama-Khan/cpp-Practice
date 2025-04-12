#include <iostream>
#include <string>
#include <regex>
using namespace std;

/*
This code is running on online compiler (https://www.programiz.com/) but not on Dev-C++ instead showing error
#error This file requires compiler and library support for the \
ISO C++ 2011 standard. This support is currently experimental, and must be \
enabled with the -std=c++11 or -std=gnu++11 compiler options.
*/


float cart(int items) {
	int qty;
	float rate, sum=0;
	for(int i=0; i<items; i++) {
		cout <<"Enter unit price for Item " <<i+1 <<":\n";
		cin >> rate;
		cout <<"Enter quantity for Item " <<i+1 <<":\n";
		cin >> qty;
		sum+=rate*qty;
	}
	return sum;
}

bool checkPromo(string promo) {
	if (regex_match(promo, regex("itm-batch4-[0-9]{3}"))){
	    cout <<"Congratulations! You got 20% discount\n";
		return true;
	}
	else
		return false;
}

int main() {
	int items;
	char isPromo;
	string promoCode;
	cout <<"Enter No. of Items:\n";
	cin >> items;
	float total=cart(items);
	cout <<"Your Total is PKR " <<total 
		 <<"\nDo you have Promo code? (y/n):\n";
	cin >> isPromo;
	if (isPromo=='y') {
		cout << "Enter Prome code: \n";
		cin >>promoCode;
		if (checkPromo(promoCode))
			total = total*0.20;
		else
			cout <<"Your Promo Code is not valid\n";
	}
	cout <<"Your Total is PKR " <<total;
}
