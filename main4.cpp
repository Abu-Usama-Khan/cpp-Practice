#include <iostream>
using namespace std;


int main() {
	int lim, preFib = 1;
	int fib =1;
	int prePreFib;
	cout << "Enter limit for Fibonacci limit:\t";
	cin >> lim;
	if (lim < 2) {
		cout << "Should be equal or greater than 2" <<endl;	
	} else {
		cout << 1 <<endl;
		for (int i =1; i <= lim; i = fib) {
				prePreFib = preFib;
				preFib = fib;
				fib  = preFib + prePreFib;
				cout << i <<endl; 
		}
	}
}


// Fibonacci Series

//	int lim, preFib = 1;
//	int fib =1;
//	int prePreFib;
//	cout << "Enter limit for Fibonacci limit:\t";
//	cin >> lim;
//	if (lim < 2) {
//		cout << "Should be equal or greater than 2" <<endl;	
//	} else {
//		cout << 1 <<endl;
//		for (int i =1; i <= lim; i = fib) {
//				prePreFib = preFib;
//				preFib = fib;
//				fib  = preFib + prePreFib;
//				cout << i <<endl; 
//		}
//	}

// Factorial of given number

//	int dig, mul = 1;
//	cout << "Enter number for factorial:\t";
//	cin >> dig;
//	if (dig < 2) {
//		cout << "Enter valid number for factorial!";	
//	} else {
//		for (int i =1; i <= dig; i++) {
//			mul *= i;
//		}
//		cout << "The factorial is " << mul;
//	}

// While Loop

//	int i = 0;
//	while (i < 6)
// {
//		cout << i <<endl;
//		i++;
//	}

// do while loop

//	int i = 0;
//	do {
//		cout << i <<endl;
//		i++;
//	}
//	while (i < 6);
