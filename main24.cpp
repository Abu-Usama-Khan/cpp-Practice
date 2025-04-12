#include <iostream>
using namespace std;

bool shopMore();

float cart();

int main(){
	float total=0;
	while (true) {
		total+=cart();
		if (!shopMore())
			break;
	}
	cout <<"Your total bill is: PKR " <<total;
}


bool shopMore() {
	char sm;
	cout <<"Do you want to shop more? (y/n):\n";
	cin >> sm;
	if (sm=='y')
		return true;
	else 
		return false;
}

float cart() {
	int qty;
	float rate, sum=0;
	cout <<"Enter unit price for Item:\n";
	cin >> rate;
	cout <<"Enter quantity for Item:\n";
	cin >> qty;
	sum+=rate*qty;
	return sum;
}
