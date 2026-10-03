#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	switch (a) {
		case 1:
		case 12:
		case 2:
			cout << "冬季" << endl;
			break;
		case 3:
		case 4:
		case 5:
			cout << "春季" << endl;
			break;
		case 6:
		case 7:
		case 8:
			cout << "夏季" << endl;
			break;
		case 9:
		case 10:
		case 11:
			cout << "秋季" << endl;
			break;
		default:
			cout << "非法输入" << endl;
	}


	return 0;
}
