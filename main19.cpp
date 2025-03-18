#include <iostream>
#include <string>
#include <cmath>
using namespace std;


void primeNumCheck(int num);


int discCalc(int amount);

int main() {
	int num;
	cout << "Enter number to check for Prime Number" <<endl;
	cin >> num;
	primeNumCheck(num);	
}

void primeNumCheck(int num) {
	string res = " a Prime Number";
	int i = 3;
	if (num==2) {
		res = " a Prime Number";
	} else if ((num%2)==0) {
		res = " not a Prime Number";
	} else if (num<=1){
		res = " not a Prime and not a Composite Number";
	} else{
		while (i <= sqrt(num)) {
			if (num%i == 0) {
				res = " not a Prime Number";
				break;
			}
			i+=2;
		}
	}
	cout << "The given number is" << res;
}

//int discCalc(int amount);
//
//int main() {
//	int am, afDisc;
//	cout << "Enter amount for 20% discount"<<endl;
//	cin >> am;
//	afDisc = discCalc(am);
//	cout <<"Amount after 20% discount is "<< afDisc;
//}
//
//int discCalc(int amount) {
//	return amount*.8;
//}


// Saboor Code (AirforShare)
//#include <iostream>
//using namespace std;
//// Create a function
//bool isPrime(int num){
//	int i
//	if(n<=1){
//		return false;
//	}
//	for(i=2;<=num;++i){
//		if(num%i==0){
//			return false;
//		}
//	}
//	return true;
//}
//
//int main() {
//	int number;
//	cout<<"Enter Number: ";
//	cin>>number;
//	
//	if(isPrime(number)){
//		cout<<number<<" is a prime number";
//	}
//	else{
//		cout<<number<<" not a prime number"
//	}
//	return 0;
//}
