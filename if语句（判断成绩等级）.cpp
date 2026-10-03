#include<iostream>
using namespace std;
int main() {
	int score;
	cin >> score;
	if (score <= 100 && score >= 90) {
		cout << "优秀" << endl;
	} else {
		if (score < 90 && score >= 80) {
			cout << "良好" << endl;
		} else {
			if (score < 80 && score >= 70) {
				cout << "中等" << endl;
			} else {
				if (score >= 60 && score < 70) {
					cout << "及格" << endl;
				} else {
					if (score < 60 && score >= 0) {
						cout << "不及格" << endl;
					} else {
						cout << "无效" << endl;
					}
				}
			}
		}
	}
}


