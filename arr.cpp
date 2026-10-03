#include<iostream>
using namespace std;
int main() {
	int i, a;
	int arr[5] = {12, 45, 7, 89, 23};
	a = arr[0];
	for (int i = 0; i < 5; i += 1) {
		cout << arr[i] << endl;
		if (arr[i] > a) {
			a = arr[i]; //TODO
		}
	}
	cout << "\n" << endl;
	cout << a << endl;
	return 0;
}
