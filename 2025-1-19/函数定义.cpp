#include<iostream>
using namespace std;
//2025年1月19日 16:07:34
//一个加法的函数
//定义加法函数
//函数定义的时候，num1和num2并没有真是数据，I
//他只是一个形式上的参数，简称形参
int add(int num1, int num2) {
	int sum = num1 + num2;
	return(sum);
}

int main() {
	int a = 10;
	int b = 50;
	cout << a << endl << b << endl;
	//调用这个函数
	//函数调用语法：函数名称(参数)
	//a和b称为实际参数，简称实参
	//当调用函数时候，实参的值会传递给形参
	cout <<"总和为" << add(a, b) << endl;



	system("pause");
		
	return 0;
}
/*
界面——————————————
10
50
总和为60
请按任意键继续. . .
功能——————————————
创造一个加法的函数，在运用此函数进行运算
总结——————————————
1.
*/