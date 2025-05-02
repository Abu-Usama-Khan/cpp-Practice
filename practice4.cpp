#include <iostream>
using namespace std;

int** dataTo2DArray(int);
void SAFE_SCAN_LIMIT();
void sumRow(int, int**);
void sumCol(int, int**);
void sumDiag(int, int**);
void sumSpecificCol(int, int**);


main() { 
	int n, query; 
	bool check=true;
	cout <<"Enter size of Heat Map: ";
	cin >>n;
	int** heatMap = dataTo2DArray(n);
	while (check) {
		cout <<"Select from the menu\n1) Row Sum.\n2) Diagonal Sum.\n3) Column Sum.;\n4) Specific Column Sum.\n5) Exit.\n";
		cin >>query;
		switch (query) {
			case 1: {
				sumRow(n, heatMap);
				break;
			}
			case 2: {
				sumDiag(n, heatMap);
				break;
			}
			case 3: {
				sumCol(n, heatMap);
				break;
			}
			case 4: {
				sumSpecificCol(n, heatMap);
				break;
			}
			default: {
				check=false;
				break;
			}
		}
	}
}


int** dataTo2DArray(int size) {
	int** tempArr = new int*[size];
	int val;
	for (int i=0; i<size; i++) {
		tempArr[i] = new int[size];
	}
	
	for (int i=0; i<size; i++) {
		for (int j=0; j<size; j++) {
			cout <<"Enter value for place (" <<i <<"," <<j <<"): ";
			cin >>val;
			tempArr[i][j] = val;
			if (val>500) SAFE_SCAN_LIMIT();
		}
	}
	return tempArr;
}

void SAFE_SCAN_LIMIT(){
	cout <<"\nWARNING! Dangerous volcanic activity in that area\n\n";
}

void sumRow(int size, int** arr) {
	int sum=0;
	for (int i=0; i<size; i++) {
		for (int j=0; j<size; j++) {
			sum+=arr[i][j];
		}
		cout <<"The sum of Row" <<i+1 <<": " <<sum <<endl;
		sum=0;
	}
}

void sumCol(int size, int** arr) {
	int sum=0;
	for (int i=0; i<size; i++) {
		for (int j=0; j<size; j++) {
			sum+=arr[j][i];
		}
		cout <<"The sum of Column" <<i+1 <<": " <<sum <<endl;
		sum=0;
	}
}

void sumDiag(int size, int** arr) {
	int sum=0;
	for (int i=0; i<size; i++) {
		sum+=arr[i][i];
		cout <<arr[i][i] <<endl;
	}
	cout <<"The sum of Diagonal: " <<sum <<endl;
}

void sumSpecificCol(int size, int** arr) {
	int col;
	cout <<"Enter the Specific Column num to find sum of (starting from 0): ";
	cin >>col;
	int sum=0;
	for (int i=0; i<size; i++) {
		sum+=arr[i][col];
	}
	cout <<"The sum of Column" <<col <<": " <<sum <<endl;
}

// Class Code
//#include<iostream>
//using namespace std;
//
//void rowsum(int array[3][3],int choice){
//	int sum=0;
//	
//	for (int i=0;i<3;i++){
//	
//	}
//	
//}
//
//void diagnolsum(int array[3][3]){
//	int sum=0;
//	
//	for (int i=0;i<3;i++){
//		for (int j=0;j<3;j++){
//			if (i==j)
//			sum=sum+array[i][j];
//		}
//	//	cout<<"Sum of diagnol "<<i<<"is"<<sum<<endl;
//		
//	}
//	cout<<"Sum of diagnol "<<i<<"is"<<sum<<endl;
//}
//int main()
//{
//	
//	
////	return 0;
//	int n,max_limit=10;
//	cout<<"Please enter size of array\n";
//	cin>>n;
//	
//	int array[3][3];
//	
//	//input value into array
//	
//	for (int i=0;i<3;i++)
//	{
//		for (int j=0;j<3;j++){
//			
//		
//			
//			cout<<"Please enter element into"<<i <<" "<<j;
//			cin>>array[i][j];
//			
//				if (array[i][j]>max_limit){
//				cout<<"Danger!!"<<endl;
//			}
//			
//		}
//	}
//	
//	
////	rowsum(array);
//	diagnolsum(array);
//}
