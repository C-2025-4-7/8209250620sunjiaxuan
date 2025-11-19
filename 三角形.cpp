#include <iostream>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		cout << a + b + c<<endl;
		if (a == b || b == c || a == c) {
			cout << "三角形是等腰三角形" << endl;
		}
	}
	else {
		cout << "不是三角形";
	}
}