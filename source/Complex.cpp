#include "Complex.h"

// Constructors:
Complex::Complex() : real(0), imag(0) { cout << "Constructor 1" << endl; }
Complex::Complex(double r, double i) : real(r), imag(i) { cout << "Constructor 2" << endl; }
Complex::Complex(double r) : real(r), imag(0) { cout << "Constructor 3" << endl; }  // conversion constructor: 
                                                                                    // not declared with the specifier explicit and can be called with a single parameter (C++ 11)

// Copy constructor:
Complex::Complex(const Complex& other) {  // copy constructor: 
	this->real = other.real;              
	this->imag = other.imag;              // copy the real and imag as the values of the invoking object
	cout << "Copy Constructor" << endl;   // print out "Copy Construct"
}

// Copy-assignment overload:
Complex& Complex::operator=(Complex const& other) {
	cout << "Copy assignment" << endl;   // print out "Copy assignment" 
	if (this != &other) {                // if the invoking object's real and image are not equal to the parameter's,
		real = other.real;               // make them equal.
		imag = other.imag;
	}
	return *this;                        // return the value of the invoking object
}

// Destructor
Complex::~Complex() {
	cout << "Destructor" << endl; // print out "Destructor" (means the destructor has been called)
}

// Equality:
bool Complex::operator==(const Complex& other) {
	return (this->real == other.real && this->imag == other.imag);  // if lhs's number is the same as the rhs's, return 1; otherwise, return 0;
}

// Addition:
Complex Complex::operator+(const Complex& other) {
	return Complex(this->real + other.real, this->imag + other.imag); // return the "(lhs's real + rhs's real)+(lhs's imag + rhs's image)i"
}

// Subtraction:
Complex Complex::operator-(const Complex& other) {
	return Complex(this->real - other.real, this->imag - other.imag); // return the "(lhs's real - rhs's real)+(lhs's imag - rhs's image)i"
}

// Division:
Complex Complex::operator/(const Complex& other) {
	double a, b, c, d;               // declare 4 double type variables to store the real and imag value of the lhs and rhs complex
	a = this->real;                  // a gets the value of the real part of current complex number
	b = this->imag;                  // b gets the value of the imaginary part of current complex number
	c = other.real;                  // c gets the value of the real part of the complex number passed in
	d = other.imag;                  // d gets the value of the imaginary part of the complex number passed in
	return Complex((a * c + b * d) / (c * c + d * d),
		(b*c - a*d) / (c*c + d*d));  // return the division of lhs and rhs complex numbers  
}

// Multiplication:
Complex Complex::operator*(const Complex& other) {
	return Complex(
		(this->real*other.real - this->imag*other.imag),
		(this->real*other.imag + this->imag*other.real)
	);  // return the "(lhs's real x rhs's real - lhs's imag x rhs's imag) + (lhs's real x rhs's imag + lhs's imag x rhs's real )i"
}

// "toString()":
ostream& operator << (ostream& output, const Complex& c) {
	return output << c.real << "+" << c.imag << "i"; // could be fancier if you want output like 1-2i, 0, 3i, ...
}

// Getters:
double Complex::getReal() { return real; } // get the real part's value
double Complex::getImag() { return imag; } // get the imaginary part's value