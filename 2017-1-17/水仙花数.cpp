#include<iostream>
using namespace std;

int main() {
	//T*N 2025年1月17日 13:20:56
	int a, b, c;//个 十 百 位
	//打印所有三位数
	for (int i = 100;i < 1000;i++) {
		
		
		//取出个位
		a = i % 10;
		//取出十位
		b = i / 10 % 10;
		//取出百位
		c = i / 100;
		if (a * a * a + b * b * b + c * c * c == i) {
			cout << i<<endl;
		}

	}
	

	system("pause");
	return 0;
}
/*
界面——————————————
153
370
371
407
请按任意键继续. . .
功能——————————————
输出所有三位数的水仙花数
总结——————————————
1.for循环也可以用｛｝
2.有关取出各各位上的数
*/