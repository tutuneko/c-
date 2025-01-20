#include<iostream>
using namespace std;
//2025年1月20日 17:13:12
int main() {
	int a = 10;
	int* x = &a;
	cout << "int:\t" << sizeof(x) << endl;
	float b = 10;
	float* y = &b;
	cout << "float:\t" << sizeof(y) << endl;
	double c = 10;
	double* z = &c;
	cout << "double:\t" << sizeof(z) << endl;

	system("pause");
	return 0;
}
/*
界面（x64）——————————————
int:    8
float:  8
double: 8
请按任意键继续. . .
界面（x86）——————————————
int:    4
float:  4
double: 4
请按任意键继续. . .
功能——————————————
？
总结——————————————
1.不同数据类型，但指针所占空间一致，在32位系统中占4字节，在64位系统中占8字节
*/