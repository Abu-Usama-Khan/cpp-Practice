#include <iostream>
#include <string>
#include <limits>
using namespace std;


bool validateMarks(float mrks, totalMarks) {
	if (mrks<0 || mrks>totalMarks) {
		return false;
	} else{
		return true;
	}
}


float percentageCounter(int totalSubjects) {
	float marks, percentage. sum = 0;
	int totMarks;
	for(int i=1; i<(totalSubjects+1);) {
		cout <<"Enter Total Marks of Subject " <<i <<"\n";
		cin >>totMarks;
		cout <<"Enter Marks Obtained of Subject " <<i <<"\n";
		cin >> marks;
		if (validateMarks(float marks, int totMarks)) {
			sum+=marks;
			i++;
		}
	}
	percentage = float sum/
	return (float sum/7);
}

int main() {
	int totalSubj;
	cout <<"Enter No. of Subjects";
	cin >> totalSubj;
	float per = percentageCounter(totalSubj);
	cout <<"The Percentage is: " <<per;
}




//int yearsToDaysAgeConverter (int yearAge) {
//	return yearAge*365;
//}
//
//
//int main() {
//	int age, ageInDays;
//	cout <<"Enter your age: \n";
//	cin >> age;
//	ageInDays=yearsToDaysAgeConverter(age);
//	cout <<"Age in Days is: " << ageInDays <<" days";
//	
//}



//bool ageValidator(int userAge) {
//	if (userAge>0) {
//		return true;
//	} else {
//		cout <<"Invalid input\n";
//		return false;
//	}
//}
//
//bool ageValidator(int userAge1, int userAge2) {
//	if (userAge1>0 && userAge2>0) {
//		return true;
//	} else {
//		cout <<"Invalid input\n";
//		return false;
//	}
//}
//
//string personType() {
//	int age;
//	string perType;
//	while(true) {
//		cout <<"Input age:\n";
//		cin >> age;
//		if (ageValidator(age))
//			break;
//	}
//	if (age>=18) {
//		perType= "Adult";
//	} else if (age>=2) {
//		perType= "Child";
//	} else {
//		perType= "Infant";
//	}
//	return perType;
//}
//
//string elderSibling() {
//	int age1, age2;
//	while(true) {
//		cout <<"Input age of sibling 1:\n";
//		cin >> age1;
//		cout <<"Input age of sibling 2:\n";
//		cin >> age2;
//		if (ageValidator(age1,age2))
//			break;
//	}
//	if (age1>age2) {
//		return "1st person is elder sibling";
//	} else if (age1<age2) {
//		return "2nd person is elder sibling";
//	} else{
//		return "Persons are twins";
//	}
//}
//
//string greet() {
//	cout <<"Input Name:\n";
//	string name, greet;
//	cin.get();
//	getline(cin, name);
//	greet = "Hi "+name;
//	return greet;
//}
//
//int main() {
//	string pt,gr, es;
//	pt=personType();
//	gr=greet();
//	es=elderSibling();
//	cout<<endl <<gr<<endl;
//	cout<<pt<<endl;
//	cout<<es;
//}


//
//void display(char g, string n) {
//	cout <<"Gender: " <<g <<"\tName: " <<n;
//}
//
//int main(int argc, char** argv) {
//	char gend;
//	string name;
//	
//	cout <<"Enter your Gender (M/F):\n";
//	cin >>gend;
//	//cin.ignore(numeric_limits<streamsize>::max(), '\n');
//	cin.get();
//	cout <<"Enter your Name:\n";
//	getline(cin,name);
//	display(gend, name);
//}






//Course Instructor Code
//0) age validator function which shows whether the age is correct or not
//1) take age as input and show personType
//2) take name as input and show greetings
//3) take both as input and print these details in diff lines
//4) take age of 2 sublings as input and share whos elder 
//
//bool ageValidator(int age) {
//    if(age > 0) {
//        return true;
//    } else {
//        return false
//    }
//}
//
//void showPersonType(int age) {
//    if(age>=0 && age <=2) {
//        cout<<"Infant";
//    } else if (age >2 && age<=17) {
//        cout<<"Child";
//    } else {
//        cout<<"Adult";
//    }
//}
//
//void greetings(string name) {
//    cout<<"Hello "<<name;
//}
//
//void differentLinesPrint(int age, string name) {
//    cout<<age<<endl;
//    cout<<name<<endl;
//}
//
//void elderSibling(int a, int b) {
//    if(a == b) {
//        cout<<"Twins";
//    } else if (a > b) {
//        cout<<"A is elder";
//    } else {
//         cout<<"B is elder";
//    }
//}
//
//int main() {
//    int age, sibling1Age, sibling2Age;
//    string name;
//    cout<<"Enter Your Name: ";
//    cin>>name;
//    cout<<"Enter Your Age: ";
//    cin>>age;
//    cout<<"Enter Sibling 1 age: ";
//    cin>>sibling1Age;
//    cout<<"Enter Sibling 2 age: ";
//    cin>>sibling2Age;
//    
//    bool isMyAgeValid = ageValidator(age);
//    
//    if(isMyAgeValid) {
//        showPersonType(age);
//        greetings(name);
//        differentLinesPrint(age, name);
//        elderSibling(sibling1Age, sibling2Age);
//    } else {
//        cout<<"Sorry We cant work on your age";
//    }
//}
//
////////////////////////////////////////////////////
//int takeItemsAndGiveSum(int items) {
//    int sum = 0;
//    for(int i = 0; i< items; i++) {
//    int price;
//    int qty;
//    cin>>price;
//    cin>>qty;
//    sum =  sum + (price*quantity); 
//    }
//    return sum + 200;
//}
//int main() {
//    int items;
//    cin>>items;
//    int totalAmountToPay = takeItemsAndGiveSum(items);
//
//
//if(totalAmountToPay >= 500) {
//    totalAmount = totalAmount - (totalAmount*0.1)
//}
//}
