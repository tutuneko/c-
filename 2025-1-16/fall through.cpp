#include <iostream>
using namespace std;

int main() {
	int x;
	//T*N 2025��1��16�� 13:49:53
	int num = 1;


	cout <<"����һ��1~10����"<<endl << "����ʮ�λ���" << endl;

	while (num < 11)
	{
		cin >> x;

		switch (x) {
		case 2:
		case 4:
		case 6:
		case 8:
		case 10:
			cout << "ż��" << endl;
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
			cout << "����" << endl;
			break;
		}
		num++;
	}
	

	system("pause");
	return 0;
}
/*
���桪��������������������������
����ʮ�λ���
1
����
(........)
10
ż��
���ܡ���������������������������
���ùᴩ��fall through���ж�10���ڵ�������������ż��
�ܽᡪ��������������������������
1.do while �� while �в�֮ͬ��
*/