#include <iostream>
using namespace std;

bool armStrongNumCheck(int num);

int main(int argc, char** argv) {
	int num;
	cout << "Enter number to check for ArmStrong Number" <<endl;
	cin >> num;
	if (armStrongNumCheck(num)) {
		cout << num <<" is a ArmStrong number";
	} else {
		cout << num <<" is not a ArmStrong number";
	}
}

bool armStrongNumCheck(int num) {
	int num2 = num, armStNum=0, ite=0, cubDig=1, numOfDig=0;
	while (num2>0) {
		numOfDig++;
		num2/=10;
	}
	num2 = num;
	while(num2>0) {
		cubDig*=num2%10;
		ite++;
		if (ite==numOfDig) {
			armStNum+=cubDig;
			num2/=10;
			cubDig=1;
			ite=0;
		}
	}
	if (num==armStNum) {
		return true;
	} else {
		return false;
	}
}




// Function for armStrong number (not accurate)
//bool armStrongNumCheck(int num) {
//	int num2 = num, armStNum=0;
//	while(num2>0) {
//		armStNum+=(num2%10)*(num2%10)*(num2%10);
//		num2/=10;
//	}
//	if (num==armStNum) {
//		return true;
//	} else {
//		return false;
//	}
//}
