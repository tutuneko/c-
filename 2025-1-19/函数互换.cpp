#include<iostream>
using namespace std;
//这里用了引用传递，直接改变了p a 的值（说实话，挺方便的）
void swap(int &num, int &num2) {
	int temp;
	temp = num;
	num = num2;
	num2 = temp;
	return;
}

int main() {

	int p = 2;
	int a = 1;
	cout << p << endl;
	cout << a << endl;
	cout << "转换后----------------------------" << endl;
	swap(p, a);
	cout << p << endl;
	cout << a << endl;


	system("pause");
	return 0;
}
/*
界面——————————————
2
1
转换后----------------------------
1
2
请按任意键继续. . .
功能——————————————
互换
总结——————————————
1.用传递是一种参数传递方式，用于在函数调用时将实际变量的引用（即变量的别名）传递给函数。
	通过引用传递，函数可以访问和修改调用者提供的实际变量，而不仅仅是变量的副本。
*/