#include<iostream>
using namespace std;
#include<string>
//2025��1��22�� 12:20:42

struct person {
	string name;
	int age;
	string gender;
};

int main() {
	person classArray[3] =
	{
		{"A",18,"�� "},
		{"B",20,"��"},
		{"C",22,"�� "}
	};
	person* p = &classArray[0];
	cout << "����" << p->name << endl << "����" << p->age << endl << "�Ա�" << p->gender << endl;
	p->age = 44;
	cout << "����" << classArray[0].age<< endl;

	system("pause");
	return 0;
}
/*
���桪��������������������������
����A
����18
�Ա��
����44
�밴���������. . .
���ܡ���������������������������
ʹ��ָ���������������
�ܽ�+����������������������������

*/