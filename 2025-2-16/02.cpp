#include<iostream>
using namespace std;
//ȫ�ֱ���
int g_a = 5;
int g_b = 10;
//const����ȫ�ֱ���
const int c_g_a = 5;
const int c_g_b = 10;
int main() {
	//ȫ����
	//ȫ�ֱ�������̬����������

	//������ͨ�ֲ�����
	int a = 5;
	int b = 10;
	//��̬����
	static int s_a = 5;
	static int s_b = 10;
	cout << "a:       \t" << (int) & a << endl;
	cout << "b:       \t" << (int)&b << endl;

	cout << "g_a:     \t" << (int)&g_a << endl;
	cout << "g_b:     \t" << (int)&g_b << endl;

	cout << "s_a:     \t" << (int)&s_a << endl;
	cout << "s_b:     \t" << (int)&s_b << endl;
	//�ַ�������
	cout <<"�ַ�������:\t" << (int)&"Hello World!" << endl;
	
	cout << "c_g_a:      \t" << (int)&c_g_a << endl;
	cout << "c_g_b:      \t" << (int)&c_g_b << endl;

	const int c_a = 5;
	const int c_b = 15;

	cout << "c_a:      \t" <<(int)& c_a << endl;
	cout << "c_b:       \t" << (int)&c_b << endl;
	
	cin.get();
	return 0;
}