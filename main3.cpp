#include <iostream>
using namespace std;

int main() {
	int unit, remUn;
	float billAm;
	float surAm = 0;
	cout << "Please Enter Units consumed:\t\n";
	cin >> unit;
	if (unit >= 600) {
		remUn = unit - 599;
		billAm = remUn * 2;
		billAm += 599 * 1.8;
	} else if (unit >= 400) {
		remUn = unit - 399;
		billAm = remUn * 1.8;
		billAm += 399 * 1.5;
	} else if (unit >= 200) {
		remUn = unit - 199;
		billAm = remUn * 1.5;
		billAm += 399 * 1.2;
	} else if (unit < 0){
		billAm = 0;
	} else {
		billAm = unit * 1.2;
	} 
	if (billAm < 100) {
		billAm = 100;
	} else if (billAm > 400) {
		surAm = billAm * .15;
		billAm += surAm;
	}
	cout << "Customer ID No.:\t"<< 1001 << "\n";
	cout << "Consumer Name:\t\tSaleem Khan\n";
	cout << "Units consumed:\t\t" << unit << "\n";
	cout << "Surcharge Amount:\t" << surAm << "\n";
	cout << "Total Bill Amount:\t" << billAm;
	return 0;
}





//	int num;
//	cout << "Please Enter any number (1-4):\t";
//	cin >> num;
//	switch(num) {
//		case 1 : {
//			cout << "You have entered 1";
//		}
//		case 2 : {
//			cout << "You have entered 2";
//		}
//		case 3 : {
//			cout << "You have entered 3";
//		}
//		case 4 : {
//			cout << "You have entered 4";
//		}
//		default : cout << "Please Enter valid number";
//	}

//float num1, num2;
//	char op;
//	cout << "Please Enter first number:\t\n";
//	cin >> num1;
//	cout << "Please Enter second number:\t\n";
//	cin >> num2;
//	cout << "Enter arithmetic operation (+,-,/,*):\t";
//	cin >> op;
//	switch(op) {
//		case '+' : {
//			cout << num1+num2;
//			break;
//		}
//		case '-' : {
//			cout << num1-num2;
//			break;
//		}
//		case '/' : {
//			cout << num1/num2;
//			break;
//		}
//		case '*' : {
//			cout << num1*num2;
//			break;
//		}
//		default : cout << "Please Enter valid number";
