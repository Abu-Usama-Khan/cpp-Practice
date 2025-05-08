#include <iostream>
#include <conio.h>
using namespace std;

/***
For simplicity in debugging I am using no. of cows as 3. 
while checking Mr. checker can change no. of cows by changing 
the variable(numOfCows) value.
***/

int** gen2DArr(int, int);

void fill2DArr(int**, int*, int, int);

int* calculateTotalMilk(int**, int);

void displayTotalMilk(int*, int*, int);

void displayAverageMilk(int*, int*, int);

void displayMaxMilk(int*, int*, int);


int main() {
	
	int numOfCows=3;
	
	int* cowsId = new int[numOfCows]{100,101, 102};
	
	int** milkProduced = gen2DArr(numOfCows, 14);
	
	fill2DArr(milkProduced, cowsId, numOfCows, 14);
	
	int* totalMilk = calculateTotalMilk(milkProduced, numOfCows);
	
	displayTotalMilk(totalMilk, cowsId, numOfCows);
	
	displayAverageMilk(totalMilk, cowsId, numOfCows);
	
	displayMaxMilk(totalMilk, cowsId, numOfCows);
	
	return 0;
}

int** gen2DArr(int row, int col) {
	
	int** tempArr = new int*[row];
	
	for (int i=0; i<row; i++) {
		tempArr[i] = new int[col];
	}
	
	return tempArr;
}

void fill2DArr(int** arr, int* cowArr, int row, int col) {
	
	int val;
	
	for (int i=0; i<col; i++) {
		cout <<"Entry for session " <<i+1 <<endl;
		
		for (int j=0; j<row; j++) {
			
			cout <<"Enter quantity of milk produced in litres by cow  with ID " <<cowArr[j] <<": ";
			cin >>val;
			
			arr[j][i] = val;
		
		}
		if (i<13) {
			cout <<"Press any key to continue for next session reading\n\n";
			getch();
		}
				
	}
}

int* calculateTotalMilk(int** arr, int numOfCows) {
	
	int* tempArr = new int[numOfCows];
	int sum=0;
	
	for (int i=0; i<numOfCows; i++) {
		
		for (int j=0; j<14; j++) {
			sum+=arr[i][j];
		}
		
		tempArr[i] = sum;
		sum=0;
	}
	
	return tempArr;
}

void displayTotalMilk(int* arr, int* cowsId, int numOfCows) {
	
	cout <<"Total Milk:\n";
	
	for (int i=0; i<numOfCows; i++) {
		cout <<"The Total Milk produced this week by cow with ID "
			 <<cowsId[i] <<": " <<arr[i] <<" litres\n";
	}
}

void displayAverageMilk(int* arr, int* cowsId, int numOfCows) {
	
	cout <<"Average Milk:\n";
	
	for (int i=0; i<numOfCows; i++) {
		cout <<"The Average Milk produced this week by cow with ID "
			 <<cowsId[i] <<": " <<arr[i]/7 <<" litres/day\n";
	}
}

void displayMaxMilk(int* arr, int* cowsId, int numOfCows) {
	
	int max = arr[0];
	int ind = 0;
	
	for (int i=0; i<numOfCows; i++) {
		if(max<arr[i]) {
			max=arr[i];
			ind=i;
		}
	}
	
	cout <<"The maximum Milk is produced by cow with ID " <<cowsId[ind] <<" and amount is: " <<max <<"litres";
}


