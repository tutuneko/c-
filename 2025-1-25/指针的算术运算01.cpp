#include<iostream>
using namespace std;
//#include<>

void ptr01(int* ptr,int Array[]) {
	
	
	
	
	
}
int main() {
	//创建一个整型数组
	int Array[2] = { 12,54 };
	//创建一个整型指针，指向数组的首地址
	int* ptr = Array;
	//ptr所指向的内存
	cout << "ptr所指向的内存：\t" << *ptr << endl;
	//执行 ptr++ 后，指针 ptr 会向前移动 4 个字节，指向下一个整型元素的地址
	ptr++;
	//执行ptr++后，ptr所指向的内存
	cout << "执行ptr++后：    \t" << *ptr << endl;
	//Array数组的第二个元素
	cout << "Array数组的第二个元素：\t" << Array[1] << endl;
	//创建一个short int指针，指向数组的首地址
	short int* ptr1 = (short int*)Array;
	//ptr1所指向的内存
	cout << "ptr1所指向的内存：\t" << *ptr1 << endl;
	//因为是short int所以加了2字节
	ptr1++;
	//判断指针是否为空：
	//空指针：指针变量指向内存中编号为0的空间
	if (ptr1 == NULL) {
		cout << "ptr1为空指针\t" << endl;
	}
	else {
		//执行ptr1++后，ptr1所指向的内存
		cout << "执行ptr1++后：    \t" << *ptr1 << endl;
	}
	system("pause");
	return 0;
}
/*
界面——————————————
ptr所指向的内存：       12
执行ptr++后：           54
Array数组的第二个元素： 54
ptr1所指向的内存：      12
执行ptr1++后：          0
请按任意键继续. . .
功能——————————————
总结——————————————
1.因为ptr为int类型，所以ptr++加了4字节，于是来到了Array数组的第二个元素
2.因为ptr1为short int类型，所以ptr1++加了2字节，于是来到了未知领域，但并不是空指针
*/