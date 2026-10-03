#include<iostream>
using namespace std;
int main() {
	int a = 1;
	while (a <= 3) {
		switch (a) {
			case 1:
				cout << a + 5 << endl;
				//TODO
				break;
			case 2:
				cout << a * 2 << endl; //TODO
				break;
			case 3:
				cout << a - 1 << endl; //TODO
				break;
			default:
				cout << a - 2 << endl; //TODO
				break;
		}
		a++;
		//TODO
	}
	system("pause");
	return 0;
}
