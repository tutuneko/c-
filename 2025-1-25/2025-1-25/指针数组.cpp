#include<iostream>
using namespace std;

int main() {
	int Array[2] = { 5,9 };
	//创建一个指针数组
	int* ptr[2];
	int len = sizeof(Array) / sizeof(Array[0]);
	//将Array数组的值赋值到*ptr
	for (int i = 0;i < len;i++) {
		ptr[i] = &Array[i];
		cout << *ptr[i] << endl;
	}
	

	
	system("pause");
	return 0;
}
/*
界面——————————————
5
9
请按任意键继续. . .
功能——————————————
赋值
总结——————————————
*/