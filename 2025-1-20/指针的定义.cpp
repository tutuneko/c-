#include<iostream>
using namespace std;

int main() {
	//ָ������ã�����ͨ��ָ���ӷ����ڴ�

	int a = 114514;
	cout << "a��ֵΪ:" << a << endl;
	//������һ��ָ�룬��ַ��aһ��
	int* p = &a;
	
	//����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�/
	//ָ��ǰ��*��������ã��ҵ�ָ��ָ����ڴ��е�����
	*p = 10;
	//ͨ��ָ���޸�a��ֵ
	cout << "a��ֵΪ:" << a << endl;
	//p�������a�ĵ�ַ��a�������ֵ
	cout << "a�ĵ�ַΪ��" << &a << endl;
	cout << "p�ĵ�ַΪ��" << p << endl;
	system("pause");
	return 0;
}