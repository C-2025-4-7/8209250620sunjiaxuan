#include<iostream>
using namespace std;
bool is_prime(int num) {
	int x = 0;
	if (num == 2) { 
		return 1;
	}
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			x++;
		}
	}
	if (x == 0) {
		return 1;
	}
	else{
		return 0;
	}
}
int main() {
	int a[20][10] = {0};
	int j = 2;
	int m = 0;
	int n = 0;
	for (int j = 2; j > 1;j++) {
		if (is_prime(j)){
			a[m][n] = j;
			n++;
		}
		if (n >=10) {
			m++;
			n = 0;
		}
		if (m > 19) {
			break;
		}
	}
	for (int c = 0; c < 20; c++) {
		for (int d = 0; d < 10; d++) {
			cout << a[c][d]<<" ";
		}
		cout << endl;
	}
}