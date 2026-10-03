#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b; //出错点：cin >> a, b;
	if (a > b) {
		cout << a << endl;

	} else {
		if (a < b) {
			cout << b << endl;
		} else {
			cout << "两数相等" << endl;
		}
	}
	return 0;
}


