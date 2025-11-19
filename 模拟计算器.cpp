#include<iostream>
using namespace std;
int main() {
	double a,b;
	char c;
	cin >> a >> c >> b;
	if (c == '+') {
		cout << a + b;
	}
	if (c == '-') {
		cout << a - b;
	}
	if (c == '*') {
		cout << a * b;
	}
	if (c == '/') {
		if (b != 0) {
			cout << a / b;
		}
		else {
			cout << "无意义";
		}
	}
	if (c == '%') {
		if ((int) a==a&&(int)b==b) { 
			cout <<(int) a % (int)b; 
		}
		else { 
			cout << "无意义"; 
		}
	}
}