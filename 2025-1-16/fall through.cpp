#include <iostream>
using namespace std;

int main() {
	int x;
	//T*N 2025年1月16日 13:49:53
	int num = 1;


	cout <<"输入一个1~10的数"<<endl << "你有十次机会" << endl;

	while (num < 11)
	{
		cin >> x;

		switch (x) {
		case 2:
		case 4:
		case 6:
		case 8:
		case 10:
			cout << "偶数" << endl;
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
			cout << "奇数" << endl;
			break;
		}
		num++;
	}
	

	system("pause");
	return 0;
}
/*
界面——————————————
你有十次机会
1
奇数
(........)
10
偶数
功能——————————————
运用贯穿（fall through）判断10以内的数是奇数还是偶数
总结——————————————
1.do while 和 while 有不同之处
*/