#include <iostream>
using namespace std;

int main() {
	int pin, attemptPin, j=2;
	cout << "Enter pin to set:\t";
	cin >> pin;
	for (int i=1; i<j; i++) {
		j++;
		cout << "Enter pin to login:\t";
		cin >> attemptPin;
		if (attemptPin == pin) {
			cout << "You are logged in!";
			break;
		} else if (i==3) {
			cout << "You are blocked!";
			break;
		} else{
			cout << "You entered wrong pin, try again!" <<endl;
		}
	}
	
}
