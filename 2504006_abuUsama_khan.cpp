#include <iostream>
#include <string>
using namespace std;


int main() {
	int opt;
	float cola=1.5, chips=1.25, candy=1, sel;
	string prod;
	float coins, sum=0;
	
	cout <<"-----------------\n"
		 <<"Vending Machine\n"
		 <<"-----------------\n";
	while (true) {
		while(true) {
			cout <<"\nMenu\n"
				 <<"1. Cola  - 1.5\n"
				 <<"2. Chips - 1.25\n"
				 <<"3. Candy - 1.00\n"
				 <<"Enter your Selection:\n";
			cin >> opt;
			if (opt>=1 && opt<=3) {
				break;
			} else {
				cout <<"Invalid selection from Menu\n";
			}
			}
			
			
				switch (opt) {
					case 1: {
						prod = "Cola";
						sel =  cola;
						break;
					}
					case 2: {
						prod = "Chips";
						sel = chips;
						break;
					}
					case 3: {
						prod = "Candy";
						sel = candy;
						break;
					}
			} 
				
		while (true) {
			while (true) {
				cout <<"Insert Coin:\n";
				cin >> coins;
				if (coins==0.25 || coins==0.5 || coins==1) {
					break;
				} else {
					cout <<"Invalid Insertion of coin\n";
				}
			}
			
			sum+=coins;
			
			if (sum>=sel) {
				cout <<"Your " <<prod <<" is dispensed\n"
					 <<"Collect your change amount: " <<sum-sel <<endl;
					 sum=0;
				break;
			}
		}
	}
}
