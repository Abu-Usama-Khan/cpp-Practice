#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int compGuess = (rand()%10)+1;
	int numOfGuess, guess;
	cout << "Enter number of attempts\t";
	cin >> numOfGuess;
	for (int i=1; i<=numOfGuess; i++) {
		cout << "Enter guess number " << i << " (number: 1-10)\t";
		cin >> guess;
		if ( guess == compGuess) {
			cout << "Congratulations you have guessed correctly in " << i << " attempts";
			numOfGuess = i;
		} else {
			cout << "Wrong! try again"<<endl;
		}
	}
}

// game to guess random number
//	int compGuess = (rand()%10)+1;
//	int numOfGuess, guess;
//	cout << "Enter number of attempts\t";
//	cin >> numOfGuess;
//	for (int i=1; i<=numOfGuess; i++) {
//		cout << "Enter guess number " << i << " (number: 1-10)\t";
//		cin >> guess;
//		if ( guess == compGuess) {
//			cout << "Congratulations you have guessed correctly in " << i << " attempts";
//			numOfGuess = i;
//		} else {
//			cout << "Wrong! try again"<<endl;
//		}
//	}

//series (6,-36,216,-1296) with user to input number of values
//	int valLim, ite = 0, sgn = -1, endLim = 6;
//	cout << "Enter limit for series\t";
//	cin >> valLim;
//	for (int i=6; i<=endLim; i*=6) {
//		endLim*=6;
//		ite++;
//		if (ite == valLim) {
//			endLim/=6;
//		}
//		sgn *=-1;
//		cout << sgn*i <<endl;
//	}

//series (6,-36,216,-1296)
//	int lim, sgn = -1;
//	cout << "Enter limit for series\t";
//	cin >> lim;
//	for (int i=6; i<=lim; i*=6) {
//		sgn *=-1;
//		cout << sgn*i <<endl;
//	}

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
