#include<iostream>
using namespace std;
int main() {
	int a;
	int count = 0;

	while (1) {
		cin >> a;
		if (a == 999) {
			cout << count << endl;
			break;
		} else {
			count++;
		}
	}
}
