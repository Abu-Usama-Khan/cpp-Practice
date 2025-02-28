#include <iostream>
using namespace std;

int main() {
	char chr;
	int rng, ite = 0;
	cout << "Enter character for pattern:\t";
	cin >> chr;
	cout << "Enter range for pattern:\t";
	cin >> rng;
	for (int i=1; i <= rng;) {
		cout << chr;
		ite++;
		if (i == ite) {
			i++;
			ite = 0;
			cout << endl;
		}
	}
}


//Table with user input for number and range

//	int num, rng;
//	cout << "Enter number for table:\t";
//	cin >> num;
//	cout << "Enter range for table:\t";
//	cin >> rng;
//	for (int i=1; i <= rng; i++) {
//		cout << num << " X " << i << " = " << num*i <<endl;
//	}

// Series (-6)

//	int str;
//	cout << "Enter starting number:\t";
//	cin >> str;
//	for (int i=str; i >= 1; i-=6) {
//		cout << i <<endl;
//	}
