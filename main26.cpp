#include <iostream>
using namespace std;

main() {
	int a=500;
	int* p = &a;
	int* q = p;
	//int b = p;
	int c = a;
	a = 600;
	int* r = &*p;
	cout <<a<<" "<<p<<" "<<q<<" "<<c<<" " <<*q<<" "<<r<<" "<<*r<<" "<<&r<<" "<<&a<<" "<<&p;
}


//Sir Ali's Code
// Online C++ compiler to run C++ program online
//#include <iostream>
//using namespace std;
//int main() {
//	
//	int a = 10;
//	cout<<"a: "<<a<<endl;
//	cout<<"&a: "<<&a<<endl;
//	
//	int* ptr = &a;
//	cout<<"ptr: "<<ptr<<endl;
//	cout<<"*ptr: "<<*ptr<<endl;
//	
//	a = 25;
//	
//	cout<<"a: "<<a<<endl;
//	cout<<"&a: "<<&a<<endl;
//
//	cout<<"ptr: "<<ptr<<endl;
//	cout<<"*ptr: "<<*ptr<<endl;	
//	
//	
//	delete(ptr);
//	
//	cout<<"ptr: "<<ptr<<endl;
//		
////    
//    int rows;
//    int columns;
//    cout<<"Enter Rows: ";
//    cin>>rows;
////    
////    cout<<"Enter Columns: ";
////    cin>>columns;
//    int sum = 0;
////    
//    int myArray[rows][columns];
////    // assign 
////    cout<<"I assigning now:"<<endl;
//    for(int i=0;i<rows;i++) {
//        sum = 0;
//        for(int j=0;j<columns;j++) {
//            cout<<i<<"\t"<<j<<endl;
//            myArray[i][j] = (i+j);
//            sum = sum + myArray[i][j];
//        }
//        
//        cout<<"my row: "<<i<<" sum:"<<sum;
//    }
//    cout<<"I am printing now:"<<endl;
//    //print
//    for(int i=0;i<rows;i++) {
//        for(int j=0;j<columns;j++) {
//            cout<<i<<"\t"<<j<<endl;
//            cout<<myArray[i][j]<<endl;
//        }
//    
//     cout<<j;
//	}  
//    
//    return 0;
//}
