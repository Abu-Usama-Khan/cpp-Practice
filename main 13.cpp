#include <iostream>
#include <string>
using namespace std;


int main() {
	string password;
	cout << "Enter Password:" <<endl;
	cin >> password;
	if (password.length() < 8 || password.length() > 20) {
		cout << "Invalid password";
	} else {
		cout << "Valid password";
	}
	
}


//	string st = "Hi! this is Abu Usama Khan, taking ITM classes at UIT";
//	int i = 0, count=1;
//	while (i < st.length()){
//		if (st[i] == " ") {
//			count++;
//		}
//		i++;
//	}
//	cout << "The number of words in sentence are: " << count;
