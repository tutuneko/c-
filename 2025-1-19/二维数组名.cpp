#include<iostream>
using namespace std;
//2025年1月19日 12:07:54
int main() {
	//定义一个二维数组
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "int所占字节：         \t" << sizeof(int) << endl;
	cout << "二维数组所占内存为:   \t" << sizeof(arr) << endl;
	cout << "第一个元素所占的内存：\t" << sizeof(arr[0][0]) << endl;
	cout << "行数：                \t" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "列数：                \t" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	cout << "该数组元素的个数为：  \t" << sizeof(arr) / sizeof(arr[0][0]) << endl;
	cout << "二维数组的地址为：    \t" << arr << "（十六进制）\t" << (int)arr << "（十进制）\t" << endl;
	cout << "第一个元素的地址为：  \t" << &arr[0][0] <<"（十六进制）\t"<<(int)&arr[0][0]<<"（十进制）\t" << endl;
	cout << "最后一个元素的地址为：\t" << &arr[1][2] << "（十六进制）\t" << (int)&arr[1][2] << "（十进制）\t" << endl;
	cout << "二维数组第一行的地址：\t" << arr[0] << "（十六进制）\t" << (int)arr[0] << "（十进制）\t" << endl;
	cout << "二维数组第二行的地址：\t" << arr[1] << "（十六进制）\t" << (int)arr[1] << "（十进制）\t" << endl;



	system("pause");
	return 0;
}
/*
界面——————————————
int所占字节：           4
二维数组所占内存为:     24
第一个元素所占的内存：  4
行数：                  2
列数：                  3
该数组元素的个数为：    6
二维数组的地址为：      0000002FE6D3F9D8（十六进制）    -422315560（十进制）
第一个元素的地址为：    0000002FE6D3F9D8（十六进制）    -422315560（十进制）
最后一个元素的地址为：  0000002FE6D3F9EC（十六进制）    -422315540（十进制）
二维数组第一行的地址：  0000002FE6D3F9D8（十六进制）    -422315560（十进制）
二维数组第二行的地址：  0000002FE6D3F9E4（十六进制）    -422315548（十进制）
请按任意键继续. . .
功能——————————————
？
总结——————————————
1.为什么会相差20字节
*/