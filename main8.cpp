#include <iostream>
using namespace std;

int main() {
	int lim, ite = 1, i =1, preFib = 1;
	int fib =1;
	int prePreFib;
	cout << "Enter limit for Fibonacci limit:\t";
	cin >> lim;
	if (lim < 2) {
		cout << "Should be equal or greater than 2" <<endl;	
	} else {
		cout << 1 <<endl;
		while (ite < lim) {
				prePreFib = preFib;
				preFib = fib;
				fib  = preFib + prePreFib;
				cout << i <<endl; 
				 i = fib;
				 ite++;
		}
	}
}


// Sereis (1,7,49, 343....)
//	int lim, ser=1;
//	cout << "Enter the limit for series:\n";
//	cin >> lim;
//	while (ser <= lim) {
//		cout << ser << ", ";
//		ser*=7;
//	}

// Fibonacci Series
//	int lim, i =1, preFib = 1;
//	int fib =1;
//	int prePreFib;
//	cout << "Enter limit for Fibonacci limit:\t";
//	cin >> lim;
//	if (lim < 2) {
//		cout << "Should be equal or greater than 2" <<endl;	
//	} else {
//		cout << 1 <<endl;
//		while (i <= lim) {
//				prePreFib = preFib;
//				preFib = fib;
//				fib  = preFib + prePreFib;
//				cout << i <<endl; 
//				 i = fib;
//		}
//	}

// Fibonacci series (eith no of terms restriction)
//	int lim, ite = 1, i =1, preFib = 1;
//	int fib =1;
//	int prePreFib;
//	cout << "Enter limit for Fibonacci limit:\t";
//	cin >> lim;
//	if (lim < 2) {
//		cout << "Should be equal or greater than 2" <<endl;	
//	} else {
//		cout << 1 <<endl;
//		while (ite < lim) {
//				prePreFib = preFib;
//				preFib = fib;
//				fib  = preFib + prePreFib;
//				cout << i <<endl; 
//				 i = fib;
//				 ite++;
//		}
//	}
