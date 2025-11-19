#include<iostream>
using namespace std;
static double x(int i,double c) {
	if (i == 1) {
		return c;
	}
	else {
		return 1.0 / 2 * (x(i - 1, c) + c / x(i - 1, c));
	}
	}
int main(){
	double a;
	cin >> a;
	int n = 1;
	while (x(n + 1, a) - x(n, a) >= 1e-5 || x(n + 1, a) - x(n, a) <= -1e-5) {
			n++;
	}
	cout << x(n+1 , a);
	}