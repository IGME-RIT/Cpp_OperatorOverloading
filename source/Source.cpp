/*
ComplexNumbers
(c) 2016
original authors: David I. Schwartz
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*	This tutorial illustrates the operator overloading with an example of 
	complex number operation.
*	It covers the concepts of specifier friend, copy constructor, destructor,
	keyword new and binary operators.
*/

#include "Complex.h"

int main() {

	cout << "\nTest 1:" << endl;  // output: Test 1:
	Complex c1;                   //         Constructor 1 | (c1= 0)
	Complex c2(1, 2);             //         Constructor 2 | (c2= 1+2i)

	cout << "\nTest 2:" << endl;  // output: Test 2:
	Complex c3 = c1 + c2;         //         Constructor 2
	cout << c3 << endl;           //         1+2i

	cout << "\nTest 3:" << endl;  // output: Test 3:
	                              //         Constructor 2
	cout << (c1 + c2) << endl;    //         1+2i
	                              //         Destructor
	cout << (c1 == c2) << endl;   //         0

	cout << "\nTest 4:" << endl;  // output: Test 4:
	Complex c4(10, 20);           //         Constructor 2
	c3 = c4;                      //         Copy assignment
	cout << c3 << endl;           //         10+20i

	system("pause");
	return 0;
}