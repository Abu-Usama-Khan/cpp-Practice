#include <iostream>
#include <string>
using namespace std;


int main() {
	int m=0, lim;
	while (m==0) {
		cout << "Enter number of max stars(in odd number) for Diamond shape\n";
		cin >> lim;
		m = lim%2;
	}
	int maxLine = (lim/2)+1;
	int s=maxLine, t=maxLine;
	for (int i=1; i<=lim; i++) {
		for (int j=1; j<=lim; j++) {
			if (j>=s && j<=t) {
				cout << "*";
			} else{
				cout << " ";
			}
		}
		if (i<maxLine) {
			s--;
			t++;	
		} else {
			s++;
			t--;
		}
		cout<<endl;
	}
}

// Diamond shape star pattern
//	int m=0, lim;
//	while (m==0) {
//		cout << "Enter number of max stars(in odd number) for Diamond shape\n";
//		cin >> lim;
//		m = lim%2;
//	}
//	int maxLine = (lim/2)+1;
//	int s=maxLine, t=maxLine;
//	for (int i=1; i<=lim; i++) {
//		for (int j=1; j<=lim; j++) {
//			if (j>=s && j<=t) {
//				cout << "*";
//			} else{
//				cout << " ";
//			}
//		}
//		if (i<maxLine) {
//			s--;
//			t++;	
//		} else {
//			s++;
//			t--;
//		}
//		cout<<endl;
//	}

// reverse the num using do while
//	int num, num2, revNum=0;
//	cout << "Enter number to reverse\n";
//	cin >> num;
//	num2 = num;
//	do {
//		revNum = revNum*10+num%10;
//		num/=10;
//	} while (num>0); 
//	cout << revNum;
	
// Enter negative number to stop iteration
//	int num;
//	do {
//		cout << "Enter number, negative to stop\n";
//		cin >> num;
//	} while (num>0);
