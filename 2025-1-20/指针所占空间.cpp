#include<iostream>
using namespace std;
//2025��1��20�� 17:13:12
int main() {
	int a = 10;
	int* x = &a;
	cout << "int:\t" << sizeof(x) << endl;
	float b = 10;
	float* y = &b;
	cout << "float:\t" << sizeof(y) << endl;
	double c = 10;
	double* z = &c;
	cout << "double:\t" << sizeof(z) << endl;

	system("pause");
	return 0;
}
/*
���棨x64������������������������������
int:    8
float:  8
double: 8
�밴���������. . .
���棨x86������������������������������
int:    4
float:  4
double: 4
�밴���������. . .
���ܡ���������������������������
��
�ܽᡪ��������������������������
1.��ͬ�������ͣ���ָ����ռ�ռ�һ�£���32λϵͳ��ռ4�ֽڣ���64λϵͳ��ռ8�ֽ�
*/