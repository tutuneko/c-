#include<iostream>
using namespace std;
//#include<>

void ptr01(int* ptr,int Array[]) {
	
	
	
	
	
}
int main() {
	//����һ����������
	int Array[2] = { 12,54 };
	//����һ������ָ�룬ָ��������׵�ַ
	int* ptr = Array;
	//ptr��ָ����ڴ�
	cout << "ptr��ָ����ڴ棺\t" << *ptr << endl;
	//ִ�� ptr++ ��ָ�� ptr ����ǰ�ƶ� 4 ���ֽڣ�ָ����һ������Ԫ�صĵ�ַ
	ptr++;
	//ִ��ptr++��ptr��ָ����ڴ�
	cout << "ִ��ptr++��    \t" << *ptr << endl;
	//Array����ĵڶ���Ԫ��
	cout << "Array����ĵڶ���Ԫ�أ�\t" << Array[1] << endl;
	//����һ��short intָ�룬ָ��������׵�ַ
	short int* ptr1 = (short int*)Array;
	//ptr1��ָ����ڴ�
	cout << "ptr1��ָ����ڴ棺\t" << *ptr1 << endl;
	//��Ϊ��short int���Լ���2�ֽ�
	ptr1++;
	//�ж�ָ���Ƿ�Ϊ�գ�
	//��ָ�룺ָ�����ָ���ڴ��б��Ϊ0�Ŀռ�
	if (ptr1 == NULL) {
		cout << "ptr1Ϊ��ָ��\t" << endl;
	}
	else {
		//ִ��ptr1++��ptr1��ָ����ڴ�
		cout << "ִ��ptr1++��    \t" << *ptr1 << endl;
	}
	system("pause");
	return 0;
}
/*
���桪��������������������������
ptr��ָ����ڴ棺       12
ִ��ptr++��           54
Array����ĵڶ���Ԫ�أ� 54
ptr1��ָ����ڴ棺      12
ִ��ptr1++��          0
�밴���������. . .
���ܡ���������������������������
�ܽᡪ��������������������������
1.��ΪptrΪint���ͣ�����ptr++����4�ֽڣ�����������Array����ĵڶ���Ԫ��
2.��Ϊptr1Ϊshort int���ͣ�����ptr1++����2�ֽڣ�����������δ֪���򣬵������ǿ�ָ��
*/