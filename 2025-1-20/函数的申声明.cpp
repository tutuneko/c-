#include<iostream>
using namespace std;
//2025年1月20日 10:40:27

	

int main() {
	int a = 10;
	int b = 55;
	cout << "a的值为" << a << "\t" << "b的值为" << b << endl;
	//test4(a, b);不能直接调用test4函数，会报错
	// 因为程序时从上往下运行的，所以要写一个函数声明，来告诉编译器，函数在下面定义
	//这就是文件的声明
	void test4(int& c, int& d);
	test4(a, b);
	cout << "a的值为" << a << "\t" << "b的值为" << b << endl;
	system("pause");
	return 0;
}
void test4(int& c, int& d) {
	int temp;

	temp = c;
	c = d;
	d = temp;
}
/*
界面——————————————
a的值为10       b的值为55
a的值为55       b的值为10
请按任意键继续. . .
功能——————————————
使用函数声明调用函数
总结——————————————
1.函数声明是为了告诉编译器，函数在下面定义
*/