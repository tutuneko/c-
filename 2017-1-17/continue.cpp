#include<iostream>
using namespace std;
//T*N 2025年1月17日 13:48:07
int main() {
	for (int i = 1;i < 11;i++) {
		if (i % 2 == 0)
		{
			continue;
			
		}
		cout << i << endl;

	}
	system("pause");
	return 0;
}
/*
界面——————————————
1
3
5
7
9
请按任意键继续. . .
功能——————————————
打印1~10的所有奇数
总结——————————————
1.continue为跳过
*/