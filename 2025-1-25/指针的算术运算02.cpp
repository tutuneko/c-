#include<iostream>
using namespace std;

int main() {
	int Array[2] = { 10,80 };
	int* ptr = &Array[1];
	cout <<"ptr指向的内存：        \t" << *ptr << endl;
	cout << "数组的第二个元素的值：\t" << Array[1] << endl;
	ptr--;
	cout << "ptr--后指向的内存：   \t" << *ptr << endl;
	cout << "数组的第一个元素的值：\t" << Array[0] << endl;
	system("pause");
	return 0;
}
/*
界面——————————————
ptr指向的内存：         80
数组的第二个元素的值：  80
ptr--后指向的内存：     10
数组的第一个元素的值：  10
请按任意键继续. . .
功能——————————————
总结——————————————
ptr--后，减去了四个字节于是来到了数组的第一个元素
*/