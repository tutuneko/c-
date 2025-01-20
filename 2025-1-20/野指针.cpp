#include<iostream>
using namespace std;
//2025年1月20日 17:38:48
int main() {
	//这是一个野指针
	int* p = (int*)0x0100;
	//cout << *p << endl;报错了读取访问权限冲突。
	system("pause");
	return 0;
}
/*
界面——————————————
功能——————————————
创建一个野指针
总结——————————————
1.野指针是指向未定义或无效内存地址的指针。
*/