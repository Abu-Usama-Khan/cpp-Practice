#include <iostream>
using namespace std;

int main() {
	char chr;
	int rng;
	cout << "Enter character for pattern:\t";
	cin >> chr;
	cout << "Enter range for pattern:\t";
	cin >> rng;
	for (int i=1; i<=rng; i++) {
		for (int j=1; j<=rng; j++) {
			if (j>rng-i){
				cout<<chr;
			} else {
				cout << " ";
			}
		}
		cout <<endl;
	}
}
