#include<iostream>
using namespace std;

int main() {
	int Array[2] = { 10,80 };
	int* ptr = &Array[1];
	cout <<"ptrָ����ڴ棺        \t" << *ptr << endl;
	cout << "����ĵڶ���Ԫ�ص�ֵ��\t" << Array[1] << endl;
	ptr--;
	cout << "ptr--��ָ����ڴ棺   \t" << *ptr << endl;
	cout << "����ĵ�һ��Ԫ�ص�ֵ��\t" << Array[0] << endl;
	system("pause");
	return 0;
}
/*
���桪��������������������������
ptrָ����ڴ棺         80
����ĵڶ���Ԫ�ص�ֵ��  80
ptr--��ָ����ڴ棺     10
����ĵ�һ��Ԫ�ص�ֵ��  10
�밴���������. . .
���ܡ���������������������������
�ܽᡪ��������������������������
ptr--�󣬼�ȥ���ĸ��ֽ���������������ĵ�һ��Ԫ��
*/