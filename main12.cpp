#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int num;
	string res = " a Prime Number";
	cout << "Enter number to check for Prime Number" <<endl;
	cin >> num;
	int i = 3;
	if (num==2) {
		res = " a Prime Number";
	} else if ((num%2)==0) {
		res = " not a Prime Number";
	} else if (num==1){
		res = " not a Prime Number";
	}else{
		while (i <= sqrt(num)) {
			if (num%i == 0) {
				res = " not a Prime Number";
				break;
			}
			i+=2;
		}
	}
	cout << "The given number is" << res;
}


// Prime number check code
//	int num;
//	string res = " a Prime Number";
//	cout << "Enter number to check for Prime Number" <<endl;
//	cin >> num;
//	int i = 3;
//	if (num==2) {
//		res = " a Prime Number";
//	} else if ((num%2)==0) {
//		res = " not a Prime Number";
//	} else if (num==1){
//		res = " not a Prime Number";
//	}else{
//		while (i <= sqrt(num)) {
//			if (num%i == 0) {
//				res = " not a Prime Number";
//				break;
//			}
//			i+=2;
//		}
//	}
//	cout << "The given number is" << res;


// Reverse the number and identify Palindrome
//	int dig, num, rev=0, exp=1, md;
//	cout << "Enter digit to sum its numbers: " <<endl;
//	cin >> dig;
//	num = dig;
//	while (num > 0) {
//		rev*=10;
//		md = num%10;
//		rev += md;
//		num /= 10;
//		//cout << exp << " " << num << " " << rev <<endl;
//	}
//	if (dig == rev) {
//		cout << "The number is Palindrome" <<endl;
//	} else {
//		cout << "The number is not Palindrome" <<endl;
//	}
//	cout << "The reverse of number is " << rev;


// Sum number of digits
//	int dig, num, sum=0;
//	cout << "Enter digit to sum its numbers: " <<endl;
//	cin >> dig;
//	num = dig;
//	while (num > 0) {
//		sum+=num%10;
//		num /= 10;
//	}
//	cout << "The sum of digits in number are " << sum;


//  // Count number of digits
//	int dig, tenPow=1, cnt = 0;
//	cout << "Enter digit to find numbers: " <<endl;
//	cin >> dig;
//	while (tenPow <= dig) {
//		cnt++;
//		tenPow *=10;
//	}
//	cout << "The number of digits in number are " << cnt;
