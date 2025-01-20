#include<iostream>
using namespace std;
//2025年1月19日 10:49:11

int main() {
	//定义一个一维数组
	int num[10] = { 8,7,3,2,7,1,6,9,4,9, };
	//以为数组的个数
	int x = sizeof(num) / sizeof(num[0]);
	//打印排序前
	cout << "排序前" << endl;
	for (int i = 0;i < x;i++) {
		cout << num[i] << "\t";
	}
	cout << endl;
	//1.比较相邻的元素。如果第一个比第二个大，就交换他们两个。
	//起始数
	int a = 0;
	//旁边的数
	int b = a + 1;
	
	for (int i = 0;i < x-1 ;i++) {

		for (int p = 0;p < x - i - 1;p++) {
			if (num[p] > num[p+1]) {
				int temp;
				temp = num[p];
				num[p] = num[p+1];
				num[p+1] = temp;
				a++;
				b++;

			}

		}
		
		int q = 10;
		int sum = num[q-1];
		

	

	}

	cout << "排序后" << endl;
	for (int i = 0;i < x;i++) {
		cout << num[i] << "\t";
	}
	cout << endl;

	//2.对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值。
	//3.重复以上的步骤，每次比较次数-1，直到不需要比较
		system("pause");
		return 0;
}
/*
界面——————————————
排序前
8       7       3       2       7       1       6       9       4       9
排序后
1       2       3       4       6       7       7       8       9       9
请按任意键继续. . .
功能——————————————
将数组中的元素排序
总结+——————————————
1.

*/