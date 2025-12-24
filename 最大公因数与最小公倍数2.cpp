#include<iostream>
using namespace std;
int function1(int a, int b) {
	int c = a > b ? a : b;
	int d = a < b ? a : b;
	while (c % d != 0) {
		int rem = c % d;
		c = d;
		d = rem;
	}
	return d;
}
void function2(int a, int b) {
	int c = a > b ? a : b;
	int d = a < b ? a : b;
	for (int i = c; i<c*d; i++){
		if (i % c == 0 && i % d == 0) {
			cout << i;
			break;
		}
	}
}
int main() {
	int m, n;
	int& a = m;
	int& b = n;
	cin >> m >> n;
	cout<<function1(m, n)<<endl;
	function2(m, n);
}