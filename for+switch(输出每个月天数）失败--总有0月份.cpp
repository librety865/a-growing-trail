#include<iostream>
using namespace std;
int main() {
	int a = 1;
	for (int a; a <= 12; a++) {
		cout << a << "月份" << endl;
		switch (a) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				cout << "有31天" << "\n"   << endl;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				cout  << "有30天" << "\n" << endl;
				break;
			case 2:
				cout << "有30天" << "\n" << endl;
				break;
			default:
				cout << "无效输入" << "\n"  << endl;
				break;
		}

	}
}
