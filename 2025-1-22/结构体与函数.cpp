#include<iostream>
using namespace std;
#include<string>
//2025��1��22�� 19:04:20
struct A {
	string name;
	int age;

};
void S(A AL) {
	AL.age = AL.age + 100;
	cout << "������" << AL.name << "���䣺" << AL.age << endl;
}
void SS(A* AL) {
	AL->age = AL->age + 100;
	cout << "������" << AL->name << "���䣺" << AL->age << endl;
}
int main(){
	A AL = { "AA",18 };
	S(AL);
	cout << "ֵ���ݣ�\t" << AL.name << "\t" << AL.age << endl;
	SS(&AL);
	cout << "��ַ���ݣ�\t" << AL.name << "\t" << AL.age << endl;
	system("pause");
	return 0;
}
/*
���桪��������������������������
������AA���䣺118
ֵ���ݣ�        AA      18
������AA���䣺118
��ַ���ݣ�      AA      118
�밴���������. . .
���ܡ���������������������������
ͨ����ַ������ֵ���ݴ�ӡ�ṹ��
�ܽᡪ��������������������������
ֵ����ռ���ڴ�ȵ�ַ���ݴ󣬵����޸�ֵ����ַռ���ڴ�С�����β�Ӱ��ʵ��
*/