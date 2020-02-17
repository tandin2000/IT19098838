/*
----------------------------
Wangchen.T
IT19098838
----------------------------
*/
class Geometry {
protected:
	double PI, R;					//for circle 
	double Length, Width;			//for rectangle 
	double Base, Height;			//for triangle
	double area;					//for calculating area

public:
	void getAreaOfCircle(double r);
	void getAreaOfRectangle(double l, double w);
	void getAreaOfTriangle(double h, double b);
};