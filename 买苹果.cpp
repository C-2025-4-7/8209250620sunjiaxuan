#include <iostream>
using namespace std;
int main() {
	int s = 0;
	for (int i = 2; i <= 100; i *=2) {
		s++;
	}
	double x = pow(2, s + 1) - 2;
	double average =0.8* x / s;
	cout << average;
}