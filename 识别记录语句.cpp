#include <iostream>
using namespace std;
int main() {
	int a = 0, b = 0, c = 0, d = 0;
	char e;
	while ((e = cin.get()) != '\n') {
		if ((e >= 'a' && e <= 'z') || (e >= 'A' && e <= 'Z')) {
			a++;
		}
		else if (e == ' ') {
			b++;
		}
		else if (e >= '0' && e <= '9') {
			c++;
		}
		else {
		d++;
	}
	}
	cout << "字母" << a << "个" << endl;
	cout << "空格" << b << "个" << endl;
	cout << "数字" << c << "个" << endl;
	cout << "其他" << d << "个" << endl;
}