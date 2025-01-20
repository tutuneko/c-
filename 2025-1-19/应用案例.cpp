#include<iostream>
#include<string>
using namespace std;
//2025年1月19日 12:43:30
int main() {
	
	string names[3] = { "张三","李四","王五" }; 
	int arr[3][3] =
	{
		{100,100,100},
		{50,50,50},
		{10,10,10}

	};
	for (int a = 0;a < 3;a++) {
		cout << names[a] << "的成绩为：";
		for (int b = 0;b < 3;b++) {
			cout << arr[a][b]<<"\t";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0;i < 3;i++) {
		int sum = 0;
		for (int a = 0;a < 3;a++) {
			sum  =sum + arr[i][a];//sum=sum+arr[i][a]
			
		}
		cout <<names[i]<<"的总成绩是:\t" << sum << endl;
	}


	system("pause");
	return 0;
}
/*
界面——————————————
张三的成绩为：100       100     100
李四的成绩为：50        50      50
王五的成绩为：10        10      10

张三的总成绩是: 300
李四的总成绩是: 150
王五的总成绩是: 30
请按任意键继续. . .
功能——————————————
输出总成绩
总结——————————————

*/