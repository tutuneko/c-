#include<iostream>
using namespace std;
#include<string>
//2025��1��22�� 11:55:22
struct personal {
	//����
	int age;
	//����
	string name;
	//�Ա�
	string gender;
};
int main() {
	//���ã����Զ���Ľṹ����뵽�����з���ά��
	//�﷨��struct �ṹ���� ������[Ԫ�ظ���] = { {}��{}��...{} }
	//����һ���ṹ������
	personal classArray[3] =
	{
		{18,"����","��"},
		{1,"С��","��������"},
		{10000,"����","�ڹ�"}
	};
	//���ṹ�����鸳ֵ
	classArray[1].age = 3;
	classArray[1].gender = "��������";
	classArray[1].name = "��";
	cout << "���䣺\t" << classArray[1].age<<endl<<"������\t"<<classArray[1].name <<endl<<"�Ա�\t"<<classArray[1].gender << endl;

	system("pause");
	return 0;
}
/*
���桪��������������������������
���䣺  3
������  ��
�Ա�  ��������
�밴���������. . .
���ܡ���������������������������
����һ���ṹ������
�ܽᡪ����������������������
nai i
*/