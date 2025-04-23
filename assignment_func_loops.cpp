#include <iostream>
#include <string>
using namespace std;

// PK36SCBL0000001123456702

void displayIban(string);


main() {
	
	string iban;
	cout <<"Enter IBAN Number:\n";
	cin >>iban;
	
	displayIban(iban);
	
}


void displayIban(string iban) {
	
	string spacedIban;
	
	int j=0;
	for (int i=0; i<29; i++) {
		if (i==4 || i==9 || i==14 || i==19 || i==24) {
			spacedIban[i] = ' ';
			cout<<spacedIban[i];
		} else {
			spacedIban[i] = iban[j];
			cout <<spacedIban[i];
			j++;
		}
	}

}

