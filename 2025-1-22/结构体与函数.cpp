#include<iostream>
using namespace std;
#include<string>
//2025��1��22�� 19:04:20
struct t {
	string name;
	int age;

};
void a11(t a1){
	cout << a1.age << endl << a1.name << endl;
}
int main() {
	t a1 = { "A",18 };
	a11(a1);
	system("pause");
	return 0;
}
/*
���桪��������������������������
18
A
�밴���������. . .
���ܡ���������������������������
�ܽᡪ��������������������������
1.���������ȣ����������ֿ�ͷ
*/