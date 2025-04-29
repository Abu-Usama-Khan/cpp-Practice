#include <iostream>
using namespace std;

void displayArray(int arr[], int size);
void displayEven(int arr[], int size);
void displayOdd(int arr[], int size);
void tableFromArray(int arr[], int size);
void tableFromArray2(int arr[], int size);


main () {
	int intArray[4];
	int val;
	
	for (int i=0; i<4; i++) {
		cout <<"Enter " <<i+1 <<" value of array: ";
		cin >>val;
		intArray[i] = val;
	}
	
	displayArray(intArray, 4);
	tableFromArray2(intArray, 4);
}


void displayArray(int arr[], int size) {
	
	displayEven(arr, size);
	cout <<endl;
	displayOdd(arr, size);
	
}

void displayEven(int arr[], int size) {
	
	cout<<"Even from Array: ";
	
	for (int i=0; i<size; i++) {
		if (!(arr[i]%2)) cout <<arr[i] <<", ";	
	}
		
}

void displayOdd(int arr[], int size) {
	
	cout<<"Odd from Array: ";
	
	for (int i=0; i<size; i++) {
		if (arr[i]%2) cout <<arr[i] <<", ";	
	}
	
}

void tableFromArray(int arr[], int size) {
	for (int i=0; i<size; i++) {
		cout<<"\nTable of " <<arr[i] <<endl;
		for (int j=1; j<=10; j++) {
			cout <<arr[i] <<" X " <<j <<" = " <<arr[i]*j <<endl;
		}
	
	}
}

void tableFromArray2(int arr[], int size) {
	int j=11;
	for (int i=0; i<size;) {
		
		if (j>10) {
			i++;
			j=1;
			cout<<"\nTable of " <<arr[i] <<endl;
		}
		cout <<arr[i] <<" X " <<j <<" = " <<arr[i]*j <<endl;
		j++;
	}
}


