#include <iostream>
using namespace std;

int* genCustomerId(int);
int* addCustomerBalance(int);
bool validateNumberOfCustomer(int);
void updateBalance(int*);


int main() {
	
	int numberOfCustomer, opt;
	bool check=true;
	
	do {
		cout <<"Enter number of Customers (max:10): ";
		cin >>numberOfCustomer;
		
		if (!validateNumberOfCustomer(numberOfCustomer)) cout <<"Incorrect value entered! only (1-10)\n";
				
	} while(!validateNumberOfCustomer(numberOfCustomer));
	
	
	int* customerId = genCustomerId(numberOfCustomer);
	
	int* customerBalance = addCustomerBalance(numberOfCustomer);
	
	
	do{
		
		cout <<"\n----------Welcome to----------\n"
		 <<"--Green Bus Customer's Portal--\n\n"
		 <<"1) Deposit to your Card.\n"
		 <<"2) Calculate fare.\n"
		 <<"3) Exit\n"
		 <<"Enter your selection (1-3): ";
		cin >>opt;
	
		switch(opt)	{
			case 1: {
				updateBalance(customerBalance);
				break;
			}
			case 2: {
				//computeFare(customerBalance);
				break;
			}
			case 3: {
				check=false;
				break;
			}
			default: {
				cout <<"Wrong Input!\n";
				break;
			}
		}
	} while(check);
	
	cout <<customerBalance[1];
	
	
	return 0;
}


int* genCustomerId(int row) {
	
	int* tempArr = new int[row];
	
	for (int i=0; i<row; i++) {
		
		tempArr[i] = i;
		
	}
	
	return tempArr;
}

int* addCustomerBalance(int row) {
	
	int* tempArr = new int[row];
	int bal;
	
	for (int i=0; i<row; i++) {
		
		cout <<"Enter Card Balance for Customer with ID " <<i <<": ";
		cin >>bal;
		
		tempArr[i] = bal;
		
	}
	
	return tempArr;
	
}

bool validateNumberOfCustomer(int val) {
	
	if (val>=1 && val<=10 ) return true;
	
	return false;
}

void updateBalance(int* arr) {
	
	int id, bal; 
	cout <<"Enter Customer ID to update Balance: ";
	cin >>id;
	
	cout <<"Enter new Card Balance for Customer with ID " <<id <<": ";
	cin >>bal;
	
	arr[id] = bal;
	
	cout <<"Updated Successfully!\n";
}



