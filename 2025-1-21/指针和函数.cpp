#include<iostream>
using namespace std;

void swap2(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int a = 11;
	int b = 79;
	
	swap(a, b);//ֵ���ݣ�
	cout <<"ֵ���ݣ�\t" << a <<"\t" << b << endl;
	swap(&a, &b);//��ַ����
	cout << "��ַ���ݣ�\t" << a << "\t" << b << endl;
	

	system("pause");
	return 0;
}