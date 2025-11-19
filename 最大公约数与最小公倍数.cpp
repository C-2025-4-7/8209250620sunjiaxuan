#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	for (int i = min(a,b); i >= 1; i--) {
		if (a % i == 0 && b % i == 0) {
			cout << i<<endl;
			break;
		}
	}
	for (int j = max(a, b); j <= a * b; j++) {
		if (j % a == 0 && j % b == 0) {
			cout << j;
			break;
		}
	}
}