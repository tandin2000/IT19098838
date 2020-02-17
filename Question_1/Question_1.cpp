/*
----------------------------
Wangchen.T
IT19098838
----------------------------
*/
#include "Geometry.h"
#include <iostream>
using namespace std;
int main() {
	double radius, length, width, base, height;								//Creating variables
	Geometry* ptr;															//Creating a object
	int num;																//Main selection controling variable 
	cout << " ===========================================" << endl;			//to show first line of execution
	cout << " ===========================================" << endl;

	while (true) {
		ptr = new Geometry();												//Declaring the space for the object 

		cout << " 1. Calculate the Area of a Circle" << endl;
		cout << " 2. Calculate the Area of a Rectangle" << endl;
		cout << " 3. Calculate the Area of a Triangle" << endl;
		cout << " 4. Quite" << endl;


		cout << "Enter the process number : ";								//Accepting the user input
		cin >> num;

		if (num == 1) {
			cout << "Enter the Radius : ";									//getting user input
			cin >> radius;

			if (radius < 0) {												//checking for invalid number
				cout << "Negative numbers are not allowed";
				return 0;
			}
			ptr->getAreaOfCircle(radius);									//calling the function
		}
		else if (num == 2) {
			cout << "Enter the Width : ";									//getting user input
			cin >> width;
			cout << "Enter the Length : ";
			cin >> length;

			if (width < 0 || length < 0) {									//checking for invalid number
				cout << "Negative numbers are not allowed";
				return 0;
			}
			ptr->getAreaOfRectangle(length, width);							//calling the function 
		}
		else if (num == 3) {
			cout << "Enter the Base : ";									//getting user input
			cin >> base;
			cout << "Enter the Height : ";
			cin >> height;

			if (base < 0 || height < 0) {									//checking for invalid number
				cout << "Negative numbers are not allowed";
				return 0;
			}

			ptr->getAreaOfTriangle(height, base);							//calling the function
		}
		else if (num == 4) {
			cout << " ===========================================" << endl;
			cout << " ===========================================" << endl;	//to show end line of execution
			return 0;
		}
		else {
			cout << "Error given number is not vaid" << endl;
			cout << " ===========================================" << endl;
			cout << " ===========================================" << endl;	//to show first line of execution
			return 0;
		}


		delete ptr;															//Dynamic object is deleted
		cout << endl;
	}
}