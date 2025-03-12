#include <iostream>
#include <string>
using namespace std;

int main() {
	int vehType = 0, hourlyRate, check1, check2, check3, parkingHours, totalBill;
	char membershipRes;
	string vehName;
	for (int parkingSlots=1; parkingSlots<=5; parkingSlots++) {
		if (parkingSlots==0){
			cout << "Parking Full! Try Again Later.";
			break;
		} else {
			do{
				cout << "Select Vehicle type (1-4)\n" << "(1) Car $5 per hour\n" << "(2) Bike $2 per hour\n" 
				<< "(3) Truck $10 per hour\n" << "(4) Electric Vehicle (EV) $3 per hour (Special discounted rate)\n";
				cin >> vehType;
				check1 = 1;
				switch (vehType) {
					case 1: {
						hourlyRate = 5;
						vehName = "Car";
						break;
					}
					case 2: {
						hourlyRate = 2;
						vehName = "Bike";
						break;
					}
					case 3: {
						hourlyRate = 10;
						vehName = "Truck";
						break;
					}
					case 4: {
						hourlyRate = 3;
						vehName = "Electric Vehicle (EV)";
						break;
					}
					default: {
						check1 = 0;
						cout << "Enter Valid Option (1-4)\n";
						break;
					}
				}
			} while (check1 == 0);
			cout << "Are you a VIP Membership holder? (y/n)\n";
			cin >> membershipRes;
			cout << "Enter number of hours required for Parking\n";
			cin >> parkingHours;
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
			<<endl<<endl;
		}
	}
}
