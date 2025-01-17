#include<iostream>
using namespace std;
//T*N 2025年1月17日 13:37:11
int main() {
	int i=0;
	
	for (i;i < 10;i++)//原本这个程序会输出1~10的所有数
	{
		cout << i << endl;
		if (i == 5) {//但是这里加了break，跳出了循环
			break;
		}
	}
	
	system("pause");
	return 0;
}
/*
界面——————————————
0
1
2
3
4
5
请按任意键继续. . .
功能——————————————
打印1~5的所有数
总结——————————————
1.break用于跳出循环
2.if不受break影响
*/