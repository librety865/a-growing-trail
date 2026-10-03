#include<iostream>
using namespace std;
int main() {
	int i, a;
	i = 1;
	while (i <= 30) {
		if (i % 3 == 0) {
			cout << "是" << endl;	//TODO
			cout << "W" << endl; //TODO
		}		else {
			cout << "否" << endl;
			for (int a; a < i + 1; i++) {
				switch (a) {
					case 1:
						cout << "X" << endl;	//TODO
						break;
					case 2:
						cout << "Y" << endl; //TODO
						break;
					case 3:
						cout << "Z" << endl;	//TODO
						break;
				}//TODO
			}
		}
		i++;
		cout << i << endl;
	}
	system("pause");
	return 0;
}





//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num = 1;
//	int total = 0;
//
//	// while第一轮遍历筛选计数
//	while(num <= 30)
//	{
//		// if 判断能否被3整除
//		if(num % 3 == 0)
//		{
//			total++;
//		}
//		num++;
//	}
//
//	// for第二轮遍历输出结果
//	for(int i = 1; i <= 30; i++)
//	{
//		if(i % 3 == 0)
//		{
//			char tag;
//			// switch 根据除以4的余数打标记
//			switch(i % 4)
//			{
//				case 0: tag = 'W'; break;
//				case 1: tag = 'X'; break;
//				case 2: tag = 'Y'; break;
//				case 3: tag = 'Z'; break;
//			}
//			cout << i << "[" << tag << "]" << endl;
//		}
//	}
//	cout << "满足条件的数字一共有" << total << "个" << endl;
//	return 0;
//}

//1. 用while遍历1~30，筛选出能被3整除的数，把符合条件的数字暂存到单个变量里，同时记录满足条件的数字总个数（变量名不能叫count）。
//
//2. 在while内部使用if判断当前数字是否可以被3整除。
//
//3. while结束后，使用for循环，再次遍历1~30，专门挑出之前筛选过的那些数。
//
//4. 在for循环体内，使用switch根据该数字%4的值输出对应的标记。
//
//5. 每行格式：数字[标记]，最后一行打印符合条件的数字一共有多少个。
