#include <iostream>
#include <string>
using namespace std;

int main() {
	int vehType, hourlyRate, check, parkingHours, totalBill, parkingOp;
	int carVacant=5, bikeVacant=5, truckVacant=5, evVacant=5;
	char membershipRes;
	string vehName;
	bool canProceed = false;
	cout << "------------Smart Parking System------------\n"
	<< "Parking Capacity: 20 Vehicles (5 each type)\n"
	<< "---------------------------------------------------\n";
	for (;;) {
		cout << "\nSelect Parking Opertion(1-3)\n1) Vehicle Entry\n2) Vehicle Exit\n3) Quit Smart Parking System\n";
		cin >> parkingOp;
		if (parkingOp==1){
			do{
				cout << "\nSelect Vehicle type for entry (1-4)\n" << "(1) Car $5 per hour\n" << "(2) Bike $2 per hour\n" 
				<< "(3) Truck $10 per hour\n" << "(4) Electric Vehicle (EV) $3 per hour (Special discounted rate)\n";
				cin >> vehType;
				check = 1;
				switch (vehType) {
					case 1: {
						if (carVacant==0) {
							cout <<"Parking Full! Try Again Later.";
							break;
						} else{
							cout << "Your Car Parked successfully!";
							carVacant--;
							break;
						}
					}
					case 2: {
						if (bikeVacant==0) {
							cout <<"Parking Full! Try Again Later.";
							break;
						} else{
							cout << "Your Bike Parked successfully!";
							bikeVacant--;
							break;
						}
					}
					case 3: {
						if (truckVacant==0) {
							cout <<"Parking Full! Try Again Later.";
							break;
						} else{
							cout << "Your Truck Parked successfully!";
							truckVacant--;
							break;
						}
					}
					case 4: {
						if (evVacant==0) {
							cout <<"Parking Full! Try Again Later.";
							break;
						} else{
							cout << "Your Electric Vehicle Parked successfully!";
							evVacant--;
							break;
						}
					}
					default: {
						check = 0;
						cout << "Enter Valid Option (1-4)\n";
						break;
					}
				}
			} while (check == 0);
		} else if (parkingOp==2) {
			do{
				cout << "\nSelect Vehicle type for exit (1-4)\n" << "(1) Car $5 per hour\n" << "(2) Bike $2 per hour\n" 
				<< "(3) Truck $10 per hour\n" << "(4) Electric Vehicle (EV) $3 per hour (Special discounted rate)\n";
				cin >> vehType;
				check = 1;
				switch (vehType) {
					case 1: {
						if (carVacant==5) {
							cout <<"Not any Car parked";
							canProceed = false;
							break;
						} else{
							vehName = "Car";
							hourlyRate = 5;
							carVacant++;
							canProceed = true;
							break;
						}
					}
					case 2: {
						if (bikeVacant==5) {
							cout <<"Not any Bike parked";
							canProceed = false;
							break;
						} else{
							vehName = "Bike";
							hourlyRate = 2;
							bikeVacant++;
							canProceed = true;
							break;
						}
					}
					case 3: {
						if (truckVacant==5) {
							cout <<"Not any Truck parked";
							canProceed = false;
							break;
						} else{
							vehName = "Truck";
							hourlyRate = 10;
							truckVacant++;
							canProceed = true;
							break;
						}
					}
					case 4: {
						if (evVacant==5) {
							cout <<"Not any Electric Vehicle parked";
							canProceed = false;
							break;
						} else{
							vehName = "Electric Vehicle";
							canProceed = false;
							hourlyRate = 3;
							evVacant++;
							canProceed = true;
							break;
						}
					}
					default: {
						check = 0;
						cout << "Enter Valid Option (1-4)\n";
						break;
					}
				}
			} while (check == 0);
			if (canProceed) {
				do {
					cout << "Is Person a VIP Membership holder? (y/n)\n";
					cin >> membershipRes;
					if (membershipRes=='y' || membershipRes=='n') {
						check = 1;	
					} else {
						cout << "Enter Valid Option (y/n)\n";
						check = 0;
					}
				} while (check == 0);
				do {
					cout << "Enter number of hours of Parking\n";
					cin >> parkingHours;
				if (parkingHours>0) {
						check = 1;	
					} else {
						cout << "Hours should be greater than 0\n";
						check = 0;
					}
				} while (check == 0);
				totalBill = hourlyRate*parkingHours;
				if (membershipRes=='y' || parkingHours>5) {
					totalBill*=.8;
				}
				cout << "\nParking Summary\n"
				<< "---------------------------------------------------"
				<< "\nVehicle Type\t\t\t" << vehName <<endl
				<< "Per Hour Rate\t\t\t" << hourlyRate <<endl
				<< "VIP Membership Holder\t\t" << membershipRes <<endl
				<< "Hours of Parking Required\t" << parkingHours <<endl
				<< "---------------------------------------------------"
				<< "\nTotal Bill\t" << totalBill <<endl
				<< "---------------------------------------------------"
				<<endl;
			}
		} else if (parkingOp==3) {
			break;
		} else {
			cout << "Enter valid operation (1-3)\n";
		}
	}
}
