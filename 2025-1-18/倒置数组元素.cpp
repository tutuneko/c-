#include<iostream>
using namespace std;
//2025��1��18�� 17:22:21
int main() {
	int num[5] = { 1,2,3,4,5 };


	
	//��һ��Ԫ��
	//num[i]
	int a = 0;
	//���һ��Ԫ��
	int b;
	b = sizeof(num) / sizeof(num[0]) - 1;
	//��ʱ��Ԫ�� = temp
	int temp = 0;

	cout << "ת��ǰ" << endl;
	for (int i = 0;i < b + 1;i++) {
		cout << num[i]<<"\t";
	}
	
	
		 
	//����������ʼ������ĩβ��ʱֹͣ
		while(a<b){
			//����ʼ��������ʱ��
			temp = num[a];
			//��ĩβ��������ʼ��
			num[a] = num[b];
			//����ʱ������ĩβ��
			num[b] = temp;
			a++;
			b--;

		}
	
	cout << endl << "ת����" << endl;

	for (int i = 0;i < sizeof(num)/sizeof(num[0]);i++) {
		cout << num[i]<<"\t";
	}
	cout << endl;
	system("pause");
	return 0;
}
/*
���桪��������������������������
ת��ǰ
1       2       3       4       5
ת����
5       4       3       2       1
�밴���������. . .
���ܡ���������������������������
������ĸ���Ԫ�ص���
�ܽᡪ��������������������������
1.Ҫ��ֵ����Ӧ�������
*/