#pragma once
#pragma once
#include <iostream>  // for cout and ostream
using namespace std; // for cout and ostream

class Complex {      // declare class Complex
	// public section:
	public:

		// Constructors:
		Complex();
		Complex(double r, double i);
		Complex(double r);

		// Copying:
		Complex(const Complex& other);
		Complex& Complex::operator=(Complex const& other);

		// Destructor
		~Complex();

		// Arithmetic:
		bool Complex::operator==(const Complex& other);    // declare overloading operator '=='
		Complex Complex::operator+(const Complex& other);  // declare overloading operator '+'
		Complex Complex::operator-(const Complex& other);  // declare overloading operator '-'
		Complex Complex::operator/(const Complex& other);  // declare overloading operator '/'
		Complex Complex::operator*(const Complex& other);  // declare overloading operator '*'

		// "toString()":
		friend ostream& operator << (ostream& output, const Complex& c);  // 

		// Getters:
		double getReal(); 
		double getImag();  // access data members of a class
		// getters and setters: https://www.tutorialcup.com/cplusplus/getters-setters.htm

	// private section:
	private:
		double real;  
		double imag;  // declare private members
};
