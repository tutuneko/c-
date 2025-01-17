#include<iostream>
using namespace std;
//T*N 2025年1月17日 13:56:05
int main() {
	
	cout << "i ";//本应输出i dislike it
	goto here;
	cout << "dis";//跳过了
	here:
	cout << "like ";//i like it
	cout << "it";
	system("pause");
	return 0;
}
/*
界面——————————————
i like it请按任意键继续. . .
功能——————————————
打印
总结——————————————
1.goto的使用会使代码变得杂乱无章 所以最好不要用goto
*/