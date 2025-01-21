#include<iostream>
using namespace std;
//2025年1月21日 18:24:31
//地址传递 int*arr 值传递 int a
void A(int* arr, int a) {
	//冒泡排序
	for (int i = 0;i < a - 1;i++) {
		for (int j = 0;j < a - i - 1;j++) {
			if (arr[j] > arr[j + 1]) {
				//互换
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		
	}
}
int main() {
	int arr[10]{ 5,8,7,3,2,1,4,9,6 };
	int a = sizeof(arr) / sizeof(arr[0]);
	A(arr, a);//arr就是数组的首地址，所以不用加取地址符&
	//遍历数组
	for (int i = 0;i < a;i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
	system("pause");
	return 0;
}
/*
界面——————————————
0       1       2       3       4       5       6       7       8       9
请按任意键继续. . .
功能——————————————
使用函数封装一个冒泡排序，运用地址传递与值传递进行排序
总结——————————————
1.arr所代表的就是数组的首地址，所以使用地址传递时不用加 &
*/