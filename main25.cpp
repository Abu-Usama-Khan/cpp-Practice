
//#include <iostream>
//using namespace std;
//
//int main() {
//	int val, row, col;
//	
//	cout <<"Enter number of rows:\n";
//	cin >>row;
//	cout <<"Enter number of columns:\n";
//	cin >>col;
//	
//	int arr[row][col];
//	
//	for (int i=0; i<row; i++) {
//		for (int j=0; j<col; j++) {
//			cout <<"Enter value for row " <<i+1 <<" and column " <<j+1 <<":\n";
//			cin >>val;
//			arr[i][j]=val;
//		}
//	}
//	
//	for (int i=0; i<row; i++) {
//		cout <<endl;
//		for (int j=0; j<col; j++) {
//			cout <<arr[i][j] <<"\t";
//		}
//	}
//}



//#include <iostream>
//using namespace std;
//
//
//long long askAccount();
//
//int main() {
//	
//	long long accNum=askAccount();
//	
//	char iban[29] = {'P','k','0'+3,'0'+2,' ','M','E','Z','N'};
//	iban[9] = ' ';
//	iban[14] = ' ';
//	iban[19] = ' ';
//	iban[24] = ' ';
//	
//	for (int i=28; i>9; i++) {
//		if (i==14 || i==19 || i==24) continue;
//		iban[i] = '0'+accNum%10;
//		accNum/10;
//	}
//	
//	for (int i=0; i<29; i++) {
//		cout <<iban[i];
//	}
//	
//}
//
//long long askAccount() {
//	long long accNum;
//	
//	cout <<"Enter your 16 digits bank account number:\n";
//	cin >>accNum;
//	return accNum;
//}


//Sir Ali's Code
// Online C++ compiler to run C++ program online
//#include <iostream>
//using namespace std;
//int main() {
//    for(int i= 1; i<=10;i++) {
//        cout<<"i: "<<i<<"\t";
//        cout<<"Hi bro \t";
//        for(int j=1;j<=4;j++) {
//            cout<<j<<endl;
//        }
//        cout<<"Exiting i bro"<<endl;
//    }
//
//    return 0;
//}



// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int rows = 5; // student
    int columns = 3; // subjects
    
    int studentsArray[rows][columns];
    // taking inputs
    for(int i= 0; i<rows;i++) {
        for(int j=0;j< columns;j++) {
          cout<<"I: "<<i<<" J:"<<j<<endl;
          cin>>studentsArray[i][j];
        }
    }
    
    // printing 2d array
    for(int i= 0; i<rows;i++) {
        for(int j=0;j< columns;j++) {
          cout<<"I: "<<i<<" J:"<<"\t"<<studentsArray[i][j]<<endl;
        }
    }
    
    int sum = 0;
    // sum all the numbers 2d array
    for(int i= 0; i<rows;i++) {
        for(int j=0;j< columns;j++) {
          sum = sum + studentsArray[i][j];
        }
        cout <<"Sum: "<<sum<<endl;
    	sum=0;
    }
    
    
    return 0;
}
