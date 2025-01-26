#include<iostream>
using namespace std;

int main() {
	int Array[2] = { 10,50 };
	int* ptr1 = &Array[0];
	int* ptr2 = &Array[1];
	int* ptr3 = &Array[0];
	if (*ptr1 == *ptr2) {
		cout << "ptr1=ptr2" << endl;
	}
	if (*ptr1 != *ptr2) {
		cout << "ptr1!=ptr2" << endl;
	}
	if (*ptr1 == *ptr3) {
		cout << "ptr1=ptr3" << endl;
	}
	if (*ptr1 < *ptr2) {
		cout << "ptr1<ptr2" << endl;
	}
	if (*ptr1 > *ptr2) {
		cout << "ptr1>ptr2" << endl;
	}
	if (*ptr1 <= *ptr2) {
		cout << "ptr1<=ptr2" << endl;
	}
	if (*ptr1 >= *ptr2) {
		cout << "ptr1>=ptr2" << endl;
	}
	if (*ptr1 < *ptr3) {
		cout << "ptr1<ptr3" << endl;
	}
	if (*ptr1 > *ptr3) {
		cout << "ptr1>ptr3" << endl;
	}
	if (*ptr1 <= *ptr3) {
		cout << "ptr1<=ptr3" << endl;
	}
	if (*ptr1 >= *ptr3) {
		cout << "ptr1>=ptr3" << endl;
	}

	system("pause");
	return 0;
}
/*
界面——————————————
ptr1!=ptr2
ptr1=ptr3
ptr1<ptr2
ptr1<=ptr2
ptr1<=ptr3
ptr1>=ptr3
请按任意键继续. . .
功能——————————————
指针的比较运算符的使用
总结——————————————
1.指针的比较运算符的使用可以判断两个指针是否指向同一个内存地址，或者判断指针是否指向内存地址的特定位置。
2.指针的比较运算符包括：==、!=、<、>、<=、>=。
3.关系比较（如 <, >, <=, >=）
在同一数组的元素之间进行是有意义的。如果指针不属于同一个数组，关系比较的结果是未定义的。
4.在比较指针之前，确保指针不是空指针（nullptr），否则可能会导致未定义行为。
*/