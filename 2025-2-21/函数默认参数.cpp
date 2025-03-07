#include <iostream>
using namespace std;
//有参数就用，没有就用默认值
int func(int a, int b, int c = 30)
{
	return a + b + c;
}
//有默认值的参数放在后面，没有的在前面
//函数声明与函数实现只能共拥有一个默认参数
int func2(int a, int b, int c);
int main() {
	cout<<func(10, 20) << endl;
	cout << func2(1,2,3) << endl;
	cin.get();
	return 0;
}
int func2(int a, int b = 1, int c = 1)
{
	return a + b + c;
}