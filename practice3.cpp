#include <iostream>
#include <string>
using namespace std;

void intToString(int);

main() {
	int num;
	cout <<"Enter number: ";
	cin >>num;
	intToString(num);
	//string amountInWords = quadForm(num1, num2, num3);
	// <<"Your input: " <<amountInWords;
}

void intToString(int dig) {
	while (dig>0 && dig <1000) {
			switch (dig%10){
				case 1: {
					cout<< "One ";
					dig/=10;
					break;
				}
				case 2: {
					cout<< "Two ";
					dig/=10;
					break;
				}
				case 3: {
					cout<< "Three ";
					dig/=10;
					break;
				}
				case 4: {
					cout<< "Four ";
					dig/=10;
					break;
				}
				case 5: {
					cout<< "Five ";
					dig/=10;
					break;
				}
				case 6: {
					cout<< "Six ";
					dig/=10;
					break;
				}
				case 7: {
					cout<< "Seven ";
					dig/=10;
					break;
				}
				case 8: {
					cout<< "Eight ";
					dig/=10;
					break;
				}
				case 9: {
					cout<< "Nine ";
					dig/=10;
					break;
				}
				case 0: {
					cout<< "Zero ";
					dig/=10;
					break;
				}
			}
	}	
}


// Class Code
//// Online C++ compiler to run C++ program online
//#include <iostream>
//#include <string>
//using namespace std;
//
//string findEnglish(int number) {
//    string english[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
//    
//    return english[number]+ " ";
//}
//
//void numberToString(int number) {
//    string sentence="";
//    string arrayofString[3];
//    int index = 2;
//    while(number > 0) {
//        int lastDigit = number % 10;
//        sentence = findEnglish(lastDigit);
//        number = number / 10;
//        arrayofString[index] = sentence;
//        index -- ;
//    }
//    cout<<arrayofString[0] + arrayofString[1] + arrayofString[2];
//}
//
//int main() {
//    int number=799;
//    numberToString(number);
//    return 0;
//}
