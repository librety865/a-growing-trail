#include<iostream>
using namespace std;
int main() {
	int a;


	while (true) {
		cin >> a;
		if (a > 0) {
			cout << a << endl;

		} else {
			goto fffff;
		}
	}
fffff:
	return 0;//为什么fffff被放到第六行无法运行
}
