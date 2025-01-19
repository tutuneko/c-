#include<iostream>
using namespace std;
//2025年1月18日 12:04:56
int main() {

	//数组的有效索引应该是 0 到 5。
	// 将值赋给 arr[6] 会导致缓冲区溢出，即你试图写入数组之外的内存区域。
	// 
	//1.数据类型数组名[数组长度];

	int arr[6];
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 4;
	arr[3] = 5;
	arr[4] = 1;
	arr[5] = 4;

	cout << "arr:"<<endl;
	for (int i = 0;i < 6;i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;

	//2.数据类型数组名[数组长度] = { 值1，值2... }；
	int arr2[6] = { 1,1,4,5,1,4 };

	cout << "arr2:" << endl;
	for (int i = 0;i < 6;i++) {
		cout << arr2[i] << "\t";
	}

	cout << endl;

	//3.数据类型数组名[] = { 值1，值2... }；
	int arr3[] = {1, 9, 1, 9, 8, 1, 0};
	//最后的0不显示，因为超出了数组的合法范围
	cout << "arr3:" << endl;
	for (int i = 0;i < 6;i++) {
		cout << arr3[i] << "\t";
	}

	
	cout << endl;system("pause");
	return 0;
}
/*
界面——————————————
arr:
1       1       4       5       1       4
arr2:
1       1       4       5       1       4
arr3:
1       9       1       9       8       1
请按任意键继续. . .
功能——————————————
用三种方式命名数组
总结——————————————
1.数组的有效索引应该是 0 到 5。
*/