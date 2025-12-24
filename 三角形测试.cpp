#include<iostream>
#include"Èı½ÇĞÎ²âÊÔ.h"
#include<cmath>
using namespace std;
bool is_valid(double side1,double side2,double side3){
	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
		return true;
	}
	else {
		return false;
	}
}
double area(double side1, double side2, double side3) {
	double s = (side1 + side2 + side3) / 2;
	return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	if (is_valid(a,b,c) ){
		cout << "area is" << " " << area(a, b, c);
	}
	else {
		cout << "it is not valid";
	}
}