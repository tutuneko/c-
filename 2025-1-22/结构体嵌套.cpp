#include<iostream>
using namespace std;
#include<string>
//2025��1��22�� 18:17:11
//���ã��ṹ���еĳ�Ա��������һ���ṹ��
struct S {
	string name;
	int age;
	string gender;
};
struct T {
	string name;
	int id;
	S Sarray;
};
int main() {

	
	T T1;
	T1.name = "AA";
	T1.id = 114514;
	T1.Sarray.age = 15;
	T1.Sarray.name = "A";
	T1.Sarray.gender = "Ů";

	cout << "��ʦid " << T1.id << endl << "��ʦ���� " << T1.name << endl << "ѧ������ "
		<< T1.Sarray.age << endl << "ѧ������ " << T1.Sarray.name << endl << "ѧ���Ա� " << T1.Sarray.gender << endl;
	system("pause");
	return 0;
}
/*
���桪����������������������
��ʦid 114514
��ʦ���� AA
ѧ������ 15
ѧ������ A
ѧ���Ա� Ů
�밴���������. . .
���ܡ�����������������������
�ܽᡪ����������������������
*/