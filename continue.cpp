#include<iostream>
using namespace std;
int main() {
	int a = 0;
	while (a < 1000) {
		a++;
		if (a % 3 == 0) {
			continue;
			//TODO
		} else {
			cout << a << endl;
		}
		a++;
	}
}
