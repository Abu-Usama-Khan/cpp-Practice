#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str, remChar;
	cout << "Enter String"<<endl;
	getline(cin, str);
	cout << "Enter character to remove"<<endl;
	getline(cin, remChar);
	for (int i=0; i<str.length(); i++) {
		if(str.find(remChar)<str.length()) {
			str.erase(str.find(remChar),1);
		} else{
			break;
		}
	}
	cout << str;
}

//	int j =0;
//	string str = "H! this is Abu Usama Khan", revStr;
////	reverse(str.begin(), str.end());
////	reverse()
////	cout << str;
//	for (int i=(str.length()-1); i>=0; i--){
//		revStr[j] = str[i];
//		j++;
//	}
