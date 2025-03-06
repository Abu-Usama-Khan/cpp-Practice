#include <iostream>
#include <string>
using namespace std;

int main() {
	string name, fName, lName;
	getline(cin, name);
//	cout << "Length: " << name.length() << endl << "Size: " << name.size() << endl 
//	<< "Find \"Kh\": " << name.find("Kh") << endl << "Replace \"Usama\" with \"Osama\": " << name.replace(4, 1, "O") << endl
//	<< "Sub String (first Name): " << name.substr(4,-3);

	fName = name.substr(0, name.find(" "));
	lName = name.substr(name.find(" ")+1,-1);
	cout << fName << endl << lName;
}
