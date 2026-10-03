#include<iostream>
using namespace std;
int main() {
	int i, a;
	a = 0;
	for (i = 2 ; i <= 100; i = i + 2) {
		cout << i << endl;
		a = i + a; //TODO
	}
	cout << a << endl; //问题出现在加二上，会随机结果
	system("pause");
	return 0;
}
