#include<iostream>
#include<string>
using namespace std;
//2025��1��21�� 18:54:28
//�ṹ�������û��Զ�����������������û��洢��ͬ����������
//�﷨��struct �ṹ����{�ṹ���Ա�б�}��
struct personal {
	//����
	string name;  
	//����
	int age;	  
	//�Ա�
	string gender;
}C;//˳�㴴����������һ�㲻��ʹ��

int main() {
	//��struct �ṹ���� ������
	//struct�ؼ��ֿ���ʡ��
	personal A;
	A.name = "A sama";
	A.age = 20;
	A.gender = "��";
	cout << "������\t" << A.name << "  ���䣺\t" << A.age << "  �Ա�\t" << A.gender << endl;
	
	//��struct �ṹ���� ������ = { ��Ա1ֵ����Ա2ֵ.. }
	struct personal B = { "B sama",15,"Ů" };
	cout << "������\t" << B.name << "  ���䣺\t" << B.age << "  �Ա�\t" << B.gender << endl;;//����һ�������;;���˴��ţ��������ᱨ��
	//������ṹ��ʱ˳�㴴������
	C.name = "C sama";
	C.age = 80;
	C.gender = "��";
	cout << "������\t" << C.name << "  ���䣺\t" << C.age << "  �Ա�\t" << C.gender << endl;
	system("pause");
	return 0;
}
/*
���桪��������������������������
������  A sama  ���䣺  20  �Ա�      ��
������  B sama  ���䣺  15  �Ա�      Ů
������  C sama  ���䣺  80  �Ա�      ��
�밴���������. . .
���ܡ���������������������������
�����ṹ��
�ܽᡪ��������������������������

*/