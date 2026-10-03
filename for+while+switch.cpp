#include<iostream>
using namespace std;
int main() {
	int i = 1, k = 1;
	for (int i = 1; i <= 3; ++i ) {
		cout << "第" << i << "轮" << endl;
		k = 1;
		while (k <= 3) {
			switch (k ) {
				case 1:
					cout << "石头" << endl; //TODO
					break;
				case 2:
					cout << "剪刀" << endl; //TODO
					break;
				case 3:
					cout << "布" << endl; //TODO
					break;
			}
			//TODO
			k++;
		}//TODO
	}
	system("pause");
	return 0;
}
