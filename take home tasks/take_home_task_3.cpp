#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int rollDice();


main() {
	bool isRoll;
	
	cout <<"Enter 1 to Roll the dice or 0 to end the program:\n";
	cin >>isRoll;
	
	while (isRoll) {
		cout <<"\nYou got: " << rollDice() <<endl;
		cout <<"\nEnter 1 to Roll the dice or 0 to end the program:\n";
		cin >>isRoll;
	}
		
}


int rollDice() {
	return (rand()%6)+1;
}
