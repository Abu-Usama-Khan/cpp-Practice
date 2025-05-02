#include <iostream>
#include <cmath>
using namespace std;

float* quadForm(float, float, float);

main() {
	float num1, num2, num3;
	cout <<"Enter coefficient of x^2: ";
	cin >>num1;
	cout <<"Enter coefficient of x: ";
	cin >>num2;
	cout <<"Enter constant: ";
	cin >>num3;
	float *x = quadForm(num1, num2, num3);
	cout <<"The root of given equation is: " <<x[0] <<" or " <<x[1];
}

float* quadForm(float a, float b, float c) {
	float *tempArr = new float[2];
	tempArr[0] = (-b +sqrt((b*b)-(4*a*c)))/(2*a);
	tempArr[1] = (-b -sqrt((b*b)-(4*a*c)))/(2*a);
	return tempArr;
}
