#include <iostream>
using namespace std;
int main() {
	char a;
	cin >> a ;
	if ((int)a <= 122 && (int)a >= 97) {
		char b=a-32;
		cout << b;
	}
	else {
		cout << (int)a;
	}
}