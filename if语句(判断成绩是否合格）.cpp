#include<iostream>
using namespace std;
int main() {
	int score;
	cin >> score;
	if (score >= 60 && score <= 100
	   ) {
		cout << "及格" << endl;
	} else {
		if (0 < score && score < 60) {
			cout << "不合格" << endl;
		} else   {
			cout << "无效" << endl;
		}
	}
}

