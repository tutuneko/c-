#include<iostream>
#include<string>
using namespace std;
//2025��1��19�� 12:43:30
int main() {
	
	string names[3] = { "����","����","����" }; 
	int arr[3][3] =
	{
		{100,100,100},
		{50,50,50},
		{10,10,10}

	};
	for (int a = 0;a < 3;a++) {
		cout << names[a] << "�ĳɼ�Ϊ��";
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
		cout <<names[i]<<"���ܳɼ���:\t" << sum << endl;
	}


	system("pause");
	return 0;
}
/*
���桪��������������������������
�����ĳɼ�Ϊ��100       100     100
���ĵĳɼ�Ϊ��50        50      50
����ĳɼ�Ϊ��10        10      10

�������ܳɼ���: 300
���ĵ��ܳɼ���: 150
������ܳɼ���: 30
�밴���������. . .
���ܡ���������������������������
����ܳɼ�
�ܽᡪ��������������������������

*/