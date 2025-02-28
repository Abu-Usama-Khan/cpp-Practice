#include <iostream>
using namespace std;

int main() {
	int lim, sgn = -1;
	cout << "Enter limit for series\t";
	cin >> lim;
	for (int i=6; i<=lim; i*=6) {
		sgn *=-1;
		cout << sgn*i <<endl;
	}
}


//series (-6, 12,-18) 1 more strategy
//	int lim, sgn = 1;
//	cout << "Enter limit for series\t";
//	cin >> lim;
//	for (int i=6; i<=lim; i+=6) {
//		sgn *=-1;
//		cout << sgn*i <<endl;
//	}

//series (-6, 12,-18)
//	int lim, ite=1;
//	cout << "Enter limit for series\t";
//	cin >> lim;
//	for (int i=6; i<=lim; i+=6) {
//		if(ite%2 !=0) {
//			cout << "-";
//		}
//		cout << i <<endl;
//		ite++;
//	}

//series (+12)
//	int lim;
//	cout << "Enter limit for series\t";
//	cin >> lim;
//	for (int i=1; i<=lim; i+=12) {
//		cout << i <<endl;
//	}
