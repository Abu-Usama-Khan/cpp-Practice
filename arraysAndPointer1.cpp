#include<iostream>
using namespace std;

int** creat2DArray(int, int);
void fill2DArray(int**, int, int);
void display2DArray(int**, int, int);

main() {
	
	int numberOfStudents, numberOfSubjects;
	cout <<"Enter number of Students: ";
	cin >>numberOfStudents;
	cout <<"Enter number of Subjects: ";
	cin >>numberOfSubjects;
	
	int** result = creat2DArray(numberOfStudents, numberOfSubjects);
	
	fill2DArray(result, numberOfStudents, numberOfSubjects);
	
	display2DArray(result, numberOfStudents, numberOfSubjects);
	
}


int** creat2DArray(int row, int col) {
	int** arr = new int*[row];
	for (int i=0; i<row; i++) {
		arr[i] = new int[col];
	}
	return arr;
}

void fill2DArray(int** arr, int row, int col) {
	int val;
	for (int i=0; i<row; i++) {
		for (int j=0; j<col; j++) {
			cout <<"Enter marks of Subject " <<j+1 <<" of Student " <<i+1 <<": ";
			cin >>val;
			arr[i][j] = val;
		}
	}
}

void display2DArray(int** arr, int row, int col) {
	for (int i=0; i<row; i++) {
		cout <<"\nMarks of Student " <<i+1 <<":\n";
		for (int j=0; j<col; j++) {
			cout <<"Subject " <<j+1 <<": ";
			cout <<arr[i][j] <<"\n";
		}
		cout <<endl;
	}
}

