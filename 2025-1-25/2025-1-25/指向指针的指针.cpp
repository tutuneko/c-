#include<iostream>
using namespace std;

int main() {
	int P = 10;
	int* ptr1 = &P;
	//ptr1ָ��ptr2
	int** ptr2 = &ptr1;
	cout << *ptr1 << endl;
	cout << **ptr2 << endl;
	system("pause");
	return 0;
}
/*
���桪��������������������������
10
10
�밴���������. . 
���ܡ���������������������������
�ܽᡪ��������������������������
1.��һ��Ŀ��ֵ��һ��ָ����ָ����һ��ָ��ʱ���������ֵ��Ҫʹ�������Ǻ������
*/