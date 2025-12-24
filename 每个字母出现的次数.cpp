#include<iostream>

using namespace std;
void count(const char s[], int counts[]) {
	for (int i = 0; i < 26; i++) {
		counts[i] = 0;
	}
	int k = 0;
	while (s[k] != '\0') {
		int t = 65;
		int f=97;
		if (s[k] >= t && s[k] < f) {
			counts['s[k]' - t]++;
		}
		else if (s[k] >= f) {
			counts[s[k] - f]++;
		}
		else {
			;
		}
		k++;
	}
}
int main(){
	char s[50];
	cin.getline(s,50);
	int counts[26] = { 0 };
	count(s, counts);
	for (int j = 0; j < 26; j++) {
		char a = 'a' + j;
		if (counts[j] != 0) {
			cout << a << ":" << counts[j] << " ";
		}
	}
}