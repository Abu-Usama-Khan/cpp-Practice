#include <iostream>
#include <string>
#include <regex>
using namespace std;

/*
This code is running on online compiler (https://www.programiz.com/) but not on Dev-C++ instead showing error
#error This file requires compiler and library support for the \
ISO C++ 2011 standard. This support is currently experimental, and must be \
enabled with the -std=c++11 or -std=gnu++11 compiler options.
*/

bool validateInput(float);

bool validateInput(int);

int numItems();

float cart(int);

float promoCodeDisc(float);

bool checkPromo(string);

void displayFinalMessage(float);

int main() {
	int items;
	char isPromo;
    items = numItems();
    
	float total=cart(items);
	
	cout <<"Your Total is PKR " <<total <<endl
		 <<"\nDo you have Promo code? (y/n):\n";
	cin >> isPromo;
	
	if (isPromo=='y' || isPromo=='Y')
		total = promoCodeDisc(total);
	
	displayFinalMessage(total);
}


bool validateInput(int val) {
    if(val>0)
        return true;
    else {
    cout<<"Invalid Input\n";
        return false;
	}
}

bool validateInput(float val) {
    if(val>0)
        return true;
    else {
    cout<<"Invalid Input\n";
        return false;
	}
}

int numItems() {
	int items;
	while(true) {
    	cout <<"Enter No. of Items:\n";
    	cin >> items;
    	if (validateInput(items))
    	    break;
    }
    return items;
}

float cart(int items) {
	int qty;
	float rate, sum=0;
	for(int i=0; i<items; i++) {
		cout <<"Enter unit price for Item " <<i+1 <<":\n";
		cin >> rate;
		if (!validateInput(rate)) {
		    i-=1;
		    continue;
		}
		cout <<"Enter quantity for Item " <<i+1 <<":\n";
		cin >> qty;
		if (!validateInput(qty)) {
		    i--;
		    continue;
		}
		sum+=rate*qty;
	}
	return sum;
}

float promoCodeDisc(float tot) {
	string promoCode;
	cout << "Enter Prome code: \n";
	cin >>promoCode;
	if (checkPromo(promoCode)) {
		cout <<"Congratulations! You got 20% discount\n";
		return tot*0.8;
	}
	else
		cout <<"Your Promo Code is not valid\n";
		return tot;
}

bool checkPromo(string promo) {
	if (regex_match(promo, regex("itm-batch4-[0-9]{3}")))
		return true;
	else
		return false;
}

void displayFinalMessage(float tot) {
	cout <<"Your Total is PKR " <<tot 
		 <<"\nPlease pay this amount to counter!\n";
}



// Ali Hasnain Code
//#include <iostream>
//using namespace std;
//int takeUserInput();
//float itemsSum(int itemsCount);
//
//int main() {
//    cout<<itemsSum(takeUserInput());
//}
//int takeUserInput() {
//    cout<<"Enter count of items: ";
//    int items;
//    cin>>items;
//    return items;
//}
//float itemsSum(int itemsCount) {
//    float sum = 0;
//    for(int i=1; i<= itemsCount; i++) {
//        int qty;
//        float amount;
//        cout<<"Enter Qty: ";
//        cin>>qty;
//        cout<<"Enter Amount: ";
//        cin>>amount;
//        sum = sum + (qty*amount);
//    }
//    return sum;
//}

//#include <iostream>
//using namespace std;
//int takeUserInput();
//float itemsSum(int itemsCount);
//void sayBye() {
//    cout<<"bye";
//}
//void greetings() {
//    cout<<"hi"<<endl;
//    greetings();
//}
//float giveTenPercentOff(float sum) 
//{
//    float discount = sum*0.9;
//    cout<<"You got a discount of "<<discount;
//    return discount;
//}
//int main() {
//    giveTenPercentOff(itemsSum(takeUserInput()));
//    // greetings();
//}
//int takeUserInput() {
//    cout<<"Enter count of items: ";
//    int items;
//    cin>>items;
//    return items;
//}
//float itemsSum(int itemsCount) {
//    float sum = 0;
//    for(int i=1; i<= itemsCount; i++) {
//        int qty;
//        float amount;
//        cout<<"Enter Qty: ";
//        cin>>qty;
//        cout<<"Enter Amount: ";
//        cin>>amount;
//        sum = sum + (qty*amount);
//    }
//    return sum;
//}
