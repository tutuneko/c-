#include<iostream>
using namespace std;
#include<string>
struct P {
	string name;
	int age;
};
static void printfPC(const P* P1) {

	//P1->age = +100;��Ϊ����const���Բ����޸�ֵ��
	cout << P1->name << "\t" << P1->age << endl;
}
void printfP(P *P1){
	
	P1->age = +100;//û��const�����޸�
	cout << P1->name <<"\t" << P1->age<< endl;
}

//2025��1��23�� 17:15:22
int main() {
	P P1 = { "AA",18 };
	printfPC(&P1);
	
	printfP(&P1);
	system("pause");
	return 0;
}
/*
���桪��������������������������
AA      18
AA      100
�밴���������. . .
���ܡ���������������������������
ͨ��������ӡ
�ܽᡪ��������������������������
const����ʹָ�봫��ʱ�������ı�
*/