#include<iostream>
using namespace std;

int main() {
	//指针的作用：可以通过指针间接访问内存

	int a = 114514;
	cout << "a的值为:" << a << endl;
	//定义了一个指针，地址与a一致
	int* p = &a;
	
	//可以通过解引用的方式来找到指针指向的内存/
	//指针前加*代表解引用，找到指针指向的内存中的数据
	*p = 10;
	//通过指针修改a的值
	cout << "a的值为:" << a << endl;
	//p储存的是a的地址，a储存的是值
	cout << "a的地址为：" << &a << endl;
	cout << "p的地址为：" << p << endl;
	system("pause");
	return 0;
}