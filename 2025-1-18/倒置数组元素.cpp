#include<iostream>
using namespace std;
//2025年1月18日 17:22:21
int main() {
	int num[5] = { 1,2,3,4,5 };


	
	//第一个元素
	//num[i]
	int a = 0;
	//最后一个元素
	int b;
	b = sizeof(num) / sizeof(num[0]) - 1;
	//临时的元素 = temp
	int temp = 0;

	cout << "转换前" << endl;
	for (int i = 0;i < b + 1;i++) {
		cout << num[i]<<"\t";
	}
	
	
		 
	//互换，当起始数大于末尾数时停止
		while(a<b){
			//将起始数赋给临时数
			temp = num[a];
			//将末尾数赋给起始数
			num[a] = num[b];
			//将临时数赋给末尾数
			num[b] = temp;
			a++;
			b--;

		}
	
	cout << endl << "转换后：" << endl;

	for (int i = 0;i < sizeof(num)/sizeof(num[0]);i++) {
		cout << num[i]<<"\t";
	}
	cout << endl;
	system("pause");
	return 0;
}
/*
界面——————————————
转换前
1       2       3       4       5
转换后：
5       4       3       2       1
请按任意键继续. . .
功能——————————————
将数组的各个元素倒置
总结——————————————
1.要赋值的数应该在左侧
*/