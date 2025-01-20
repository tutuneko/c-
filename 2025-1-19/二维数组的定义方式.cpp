#include<iostream>
using namespace std;
//2025年1月19日 11:24:00
int main() {

	//定义一个二维数组
	//1.数据类型 数组名[行数][列数]；
	//定义一个二维数组，两行三列
	int arr[2][3];
	cout << "arr" << endl;
	for (int i = 0;i < 2; i++) {
		for (int a = 0;a < 3; a++) {
			cout << arr[i][a] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	//2..数据类型 数组名[行数][列数] ={{数据1，数据2}，{数据3，数据4}};
	int arr2[2][3] =
	{ {1,2,3,},
	  {4,5,6} };
	cout << "arr2" << endl;
	for (int i = 0;i < 2; i++) {
		
		for (int a = 0;a < 3; a++) {
			cout << arr2[i][a] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	//3.数据类型 数组名[行数][列数] ={数据1，数据2，数据3，数据4}；
	int arr3[2][3] = { 1,2,3,4,5,6 };
	cout << "arr3" << endl;
	for (int i = 0;i < 2; i++) {
		for (int a = 0;a < 3; a++) {
			cout << arr3[i][a] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	//4.数据类型 数组名[][列数] ={数据1，数据2，数据3，数据4};
	int arr4[][3] = { 1,2,3,4,5,6 };
	cout << "arr4" << endl;
	for (int i = 0;i < 2; i++) {
		for (int a = 0;a < 3; a++) {
			cout << arr4[i][a] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}
/*
界面——————————————
arr
-858993460      -858993460      -858993460
-858993460      -858993460      -858993460

arr2
1       2       3
4       5       6

arr3
1       2       3
4       5       6

arr4
1       2       3
4       5       6

请按任意键继续. . .
功能————————————
总结——————————————
1.二维数组好像不会赋默认值
*/