#include<iostream>
using namespace std;

int main() {
	int Array[2] = { 5,9 };
	//����һ��ָ������
	int* ptr[2];
	int len = sizeof(Array) / sizeof(Array[0]);
	//��Array�����ֵ��ֵ��*ptr
	for (int i = 0;i < len;i++) {
		ptr[i] = &Array[i];
		cout << *ptr[i] << endl;
	}
	

	
	system("pause");
	return 0;
}
/*
���桪��������������������������
5
9
�밴���������. . .
���ܡ���������������������������
��ֵ
�ܽᡪ��������������������������
*/