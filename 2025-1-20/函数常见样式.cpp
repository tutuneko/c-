#include<iostream>
using namespace std;
//2025年1月20日 10:24:53
//1.无参无返
void test1() {
	cout << "这是 test1 函数的输出" << endl;
}
//2.有参无返
void test2(int a, int b) {
	cout <<"这是函数test2的输出：" <<"第一个值为" << a << "\t" <<"第二个值为" << b << endl;
}
//3.无参有返
int test3() {
	cout << "这是test3的输出：";
	return 114514;
}
//4.有参有返
int test4(int c, int d) {
	int temp;
	cout << "这是test4的输出" << endl;
	cout <<"交换前：\t" << c << "\t" << d << endl;
	temp = c;
	c = d;
	d = temp;
	cout <<"交换后：\t" << c << "\t" << d << endl;
	return 114514;
}
int main() {
	//无参无返的调用
	test1();
	//有参无返的调用
	int a = 0;
	int b = 415;
	test2(a , b);
	//无参有返的调用
	int c = test3();//只要调用了这个函数，就会输出 “这是test3的输出：”
	cout << c << endl;//将test3的返回值赋到了c，所以会打印test3的返回值
	//有参有返的调用
	int d = 11;
	int e = 20;
	test4(d, e);
	
	system("pause");
	return 0;
}
/*
界面——————————————
这是 test1 函数的输出
这是函数test2的输出：第一个值为0        第二个值为415
这是test3的输出：114514
这是test4的输出
交换前：        11      20
交换后：        20      11
请按任意键继续. . .
功能——————————————
无参无返，
有参无返，
无参有返，
有参有返的编写及调用。
总结——————————————
1.存在即真理
*/