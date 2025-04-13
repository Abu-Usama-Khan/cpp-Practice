#include <iostream>
#include <string>
#include <regex>
using namespace std;

/*
This code is running on online compiler (https://www.programiz.com/) but not on Dev-C++ instead showing error
(#error This file requires compiler and library support for the \
ISO C++ 2011 standard. This support is currently experimental, and must be \
enabled with the -std=c++11 or -std=gnu++11 compiler options.)
*/


// Functions Declaration

bool validateInput(float);

bool validateInput(int);

bool shopMore();

float cart();

float promoCodeDisc(float);

bool checkPromo(string);

void displayFinalMessage(float);


// Main Body 

int main(){
	float total=0;
	char isPromo;
	
	while (true) {
		total+=cart();
		if (!shopMore())
			break;
	}
	
	cout <<"Your Total is PKR " <<total <<endl
		 <<"\nDo you have Promo code? (y/n):\n";
	cin >> isPromo;
	
	if (isPromo=='y' || isPromo=='Y')
		total = promoCodeDisc(total);
	else 
		total = total*0.95; 
	
	displayFinalMessage(total);
}


// Functions Definition

bool validateInput(int val) {
    if(val>0)
        return true;
    else {
    cout<<"Invalid Input\n";
        return false;
	}
}

bool validateInput(float val) {
    if(val>0)
        return true;
    else {
    cout<<"Invalid Input\n";
        return false;
	}
}

bool shopMore() {
	char sm;
	cout <<"Do you want to shop more? (y/n):\n";
	cin >> sm;
	if (sm=='y' || sm=='Y')
		return true;
	else 
		return false;
}

float cart() {
	int qty;
	float rate, sum=0;
	do {
		cout <<"Enter unit price for Item:\n";
		cin >> rate;
	}while (!validateInput(rate));
	do {
		cout <<"Enter quantity for Item:\n";
		cin >> qty;
	}while (!validateInput(qty));
	sum+=rate*qty;
	return sum;
}

float promoCodeDisc(float tot) {
	string promoCode;
	cout << "Enter Prome code: \n";
	cin >>promoCode;
	if (checkPromo(promoCode)) {
		cout <<"\nCongratulations! You got 20% discount\n";
		return tot*0.8;
	}
	else
		cout <<"\nYour Promo Code is not valid\n";
		return tot*0.95;
}

bool checkPromo(string promo) {
	if (regex_match(promo, regex("ITM-FUNCTIONS")))
		return true;
	else
		return false;
}

void displayFinalMessage(float tot) {
	cout <<"\nYour Total after discount is PKR " <<tot 
		 <<"\n\nPlease pay this amount to counter!\n";
}
