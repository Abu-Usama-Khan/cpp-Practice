#include <iostream>
using namespace std;

void dispArray(int**, int, int);
void dispArray(int**, int, int);
int** updateMarks(int**, int, int);

int main() {

	int stdn, crs;
	cout <<"Enter number of Students:\n";
	cin >>stdn;
	cout <<"Enter number of Courses:\n";
	cin >>crs;
	
	int** studentsMarksRecord = new int*[stdn];
	
	for (int i=0; i<stdn; i++) {
		studentsMarksRecord[i] = new int[crs];
	}
	
	for (int i=0; i<stdn; i++) {
		for (int j=0; j<crs; j++) {
			cout <<"Enter student "<<i+1 <<" marks for course "<<j+1 <<":\n";
			cin >>studentsMarksRecord[i][j];	
		}
	}
	
	dispArray(studentsMarksRecord, stdn, crs);
	
	studentsMarksRecord = updateMarks(studentsMarksRecord, 1, 2);
	
	dispArray(studentsMarksRecord, stdn, crs);
	
	
}

void dispArray(int** arr, int row, int col) {
	
	for (int i=0; i<row; i++) {
		cout <<"\nStudent " <<i+1 <<":\n";
		for (int j=0; j<col; j++) {
			cout <<"Marks in Subject " <<j <<" is:" <<arr[i][j] <<"\n";
		}
	}
	
}

int** updateMarks(int** arr, int row, int col) {
	int newVal;
	cout <<"Enter new value:\n";
	cin >>newVal;
	arr[row][col] = newVal;
	return arr;
}

//#include <iostream>
//using namespace std;
//
//void dispArray(int[], int);
//
//int main() {
//
//	int size;
//	cout <<"Enter size for array:\n";
//	cin >>size;
//	
//	int* arr = new int[size];
//	
//	for (int i=0; i<size; i++) {
//		cout <<"Enter "<<i+1 <<" value of array:\n";
//		cin >>arr[i];
//	}
//	
//	dispArray(arr, size);
//}
//
//void dispArray(int arr[], int size) {
//	
//	for(int i = 0; i < size; i++) {
//	cout << arr[i] << " ";
//	}
//	
//}

//#include <iostream>
//using namespace std;
//
//void printArray(int arr[], int size) {
//for(int i = 0; i < size; i++) {
//cout << arr[i] << " ";
//}
//}
//
//int main() {
//int myArray[] = {1, 2, 3, 4};
//printArray(myArray, 4);
//return 0;
//}


//Sir Ali's Code
//#include <iostream>
//using namespace std;
//
//void displayMePlease(int arr[], int s) {
//	cout<<"I am displaying"<<endl;
//        for(int i=0;i<s;i++) {
//        cout<<arr[i];
//    }
//}
//void myFunction(int size) {
//    int array[size];
//    for(int i=0;i<size;i++) {
//    	cout<<"value plz: ";
//        cin>>array[i];
//    }
//
//    displayMePlease(array,size);
//}
//
//void displayMePleaseWithPtr(int *arr, int s) {
//	cout<<"I am displaying"<<endl;
//        for(int i=0;i<s;i++) {
//        cout<<arr[i];
//    }
//}
//void myFunctionPtr(int size) {
//    int *array = new int[size];
//    for(int i=0;i<size;i++) {
//    	cout<<"value plz: ";
//        cin>>array[i];
//    }
//
//    displayMePleaseWithPtr(array,size);
//}
//
//void myFunctionThatChangesArray(int size,int *array) {
//	    for(int i=0;i<size;i++) {
//    	array[i] = 67;
//       }
//	}
//int main() {
//    int size;
//    cout<<"Enter size of array: ";
//    cin>>size;
//   
//   	myFunctionPtr(size);
//	myFunction(size);
// 
//    
//    int *arrayOriginal = new int[size];
//    myFunctionThatChangesArray(size, arrayOriginal);
//   	
//
//    for(int i=0;i<size;i++) {
//    	cout<<original[i];
//    }	
//    return 0;
//    
//}
