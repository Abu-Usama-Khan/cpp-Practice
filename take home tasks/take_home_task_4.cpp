#include <iostream>
#include <iostream>
#include <string>
using namespace std;


string discriminant(float, float, float);

int main() {
    
    cout << discriminant(1, -3, 2) <<endl;  // Example for Real and distinct roots
    cout << discriminant(1, -2, 1) <<endl;  // Example for Real and repeated root
    cout << discriminant(1, 2, 5)  <<endl;  // Example for Complex/Imaginary roots

    return 0;
}

string discriminant(float a, float b, float c) {
	
	//(a, b, c) represents Coefficients of Quadratic Equation.
	
    double D = (b * b) - (4 * a * c);

    if (D > 0) {
        return "Real and distinct roots";
    } else if (D == 0) {
        return "Real and repeated root";
    } else {
        return "Complex/Imaginary roots";
    }
}
