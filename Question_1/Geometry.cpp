/*
----------------------------
Wangchen.T
IT19098838
----------------------------
*/
#include "Geometry.h"
#include <iostream>
using namespace std;

void Geometry::getAreaOfCircle(double r) {
	PI = 22.0 / 7.0;											//Giving the Pi value 
	area = (r * r) * PI;									//Calculating the area circle
	cout << "Area of the Circle : " << area << endl;		//Printing the area circle
}


void Geometry::getAreaOfRectangle(double l, double w) {
	area = l * w;											//Calculating the area rectangle
	cout << "Area of the Rectangle : " << area << endl;		//Printing the area rectangle
}


void Geometry::getAreaOfTriangle(double h, double b) {
	area = 0.5 * h * b;										//Calculating the area of triangle
	cout << "Area of the Trinagle : " << area << endl;		//Printing the area triangle
}