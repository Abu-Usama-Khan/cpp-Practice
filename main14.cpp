#include <iostream>
#include <string>
using namespace std;

int main() {
	string st1, st2;
	cout << "Enter string 1:" <<endl;
	cin >> st1;
	cout << "Enter string 2:" <<endl;
	cin >> st2;
	if(st1.compare(st2) == 0) {
		cout << "Both strings are same";
	} else if (st1.compare(st2) == 1) {
		cout << "String 1 is bigger";
	} else {
		cout << "String 2 is bigger";
	}
}


// Compares string 1 and string 2
//	string st1, st2;
//	cout << "Enter string 1:" <<endl;
//	cin >> st1;
//	cout << "Enter string 2:" <<endl;
//	cin >> st2;
//	if(st1.compare(st2) == 0) {
//		cout << "Both strings are same";
//	} else if (st1.compare(st2) == 1) {
//		cout << "String 1 is bigger";
//	} else {
//		cout << "String 2 is bigger";
//	}

// Validate email and password
//	bool emailVal;
//	string email, password;
//	cout << "Enter Email:" <<endl;
//	getline(cin, email);
//	cout << "Enter Password:" <<endl;
//	cin >> password;
//	size_t atPos = email.find("@");
//	size_t dotPos = email.find(".");
//	if (atPos != string::npos && dotPos != string::npos && atPos < dotPos) {
//		emailVal = true;
//	} else {
//		emailVal = false;
//	}
//	if (emailVal == true && password.length() > 8 && password.length() < 20) {
//		cout << "Valid Account";
//	} else {
//		cout << "Invalid Email or Password";
//	}
