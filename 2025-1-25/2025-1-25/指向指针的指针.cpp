#include<iostream>
using namespace std;

int main() {
	int P = 10;
	int* ptr1 = &P;
	//ptr1指向ptr2
	int** ptr2 = &ptr1;
	cout << *ptr1 << endl;
	cout << **ptr2 << endl;
	system("pause");
	return 0;
}
/*
界面——————————————
10
10
请按任意键继续. . 
功能——————————————
总结——————————————
1.当一个目标值被一个指针间接指向到另一个指针时，访问这个值需要使用两个星号运算符
*/