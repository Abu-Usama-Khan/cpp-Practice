#include <iostream>
using namespace std;

int** gen2DArr(int, int);

void fill2DArr(int**, int, int);

bool validateBatteryLevel(int);

void display2DArr(int**, int, int);

int findMaxBattery(int**, int&, int&);


int main() {
	
	int row=3, col=3, maxRow=0, maxCol=0;
	
	int** robotBatteryLevelArr = gen2DArr(row, col);
	
	fill2DArr(robotBatteryLevelArr, row, col);
	
	display2DArr(robotBatteryLevelArr, row, col);
	
	
	cout <<"Robot at position (" <<maxRow <<", " <<maxCol <<") has the highest battery level: "
		 << findMaxBattery(robotBatteryLevelArr, maxRow, maxCol) <<"%\n";
	
	return 0;
}


int** gen2DArr(int row, int col) {
	
	int** tempArr = new int*[row];
	
	for (int i=0; i<row; i++) {
		tempArr[i] = new int[col];
	}
	
	return tempArr;
}

void fill2DArr(int** arr, int row, int col) {
	
	int val;
	
	for (int i=0; i<row; i++) {
		
		for (int j=0; j<col; j++) {
			
			do {
				cout <<"Enter battery level for robot (" <<i <<", " <<j <<"): ";
				cin >>val;
				
				if (!validateBatteryLevel(val)) cout <<"Incorrect value entered! only (0-100)\n";
				
			} while(!validateBatteryLevel(val));
			
			arr[i][j] = val;
				
		}
	}
}

bool validateBatteryLevel(int val) {
	
	if (val>=0 && val<=100 ) return true;
	
	return false;
}

void display2DArr(int** arr, int row, int col) {
	
	for (int i=0; i<row; i++) {
		
		for (int j=0; j<col; j++) {
			
			cout <<"Battery Level for Robot (" <<i <<", " <<j <<"): " <<arr[i][j] <<"%" <<endl;
				
		}
	}
	
}

int findMaxBattery(int** arr, int& row, int& col) {
	
	int max = arr[0][0];
	
	for (int i=0; i<3; i++) {
		
		for (int j=0; j<3; j++) {
			
			if(max<arr[i][j]) {
				max=arr[i][j];
				row=i;
				col=j;	
			}
				
		}
	}
	
	return max;
	
}


