/*����������
ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������
���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�*/
#include<iostream>
using namespace std;
#include<string>
#include<Ctime>
//2025��1��24�� 18:15:53
//ѧ���Ľṹ��
struct student {
	//����
	string name;
	//���Է���
	int score;
};
//��ʦ�Ľṹ��
struct teacher {
	string name;
	student Sarray[5];

};
//��ÿλ��ʦ����ѧ��
void assign(teacher Tarray[], int len,int Slen) {
	char name[] = "ABCDE";

	//����ʦ����
	for (int i = 0;i < len;i++) {
		Tarray[i].name = "Teacher_";
		Tarray[i].name += name[i];
		for (int j = 0;j < Slen;j++) {
			Tarray[i].Sarray[j].name = "Student_";
			Tarray[i].Sarray[j].name += name[j];
			//���������40~100
			int random = rand() % 61 + 40;
			Tarray[i].Sarray[j].score = random;
		}
	}
	
	
}
void printall(teacher Tarray[],int len,int Slen) {
	//������ʦ������
	for (int i = 0;i < len;i++) {
		cout <<"������\t" << Tarray[i].name << endl;
		for (int j = 0;j < Slen;j++) {
			cout <<"\t������\t" << Tarray[i].Sarray[j].name << "����Ϊ��\t" << Tarray[i].Sarray[j].score << endl;
		}
	}


}
int main() {
	//���������
	srand((unsigned int)time(NULL));
	//ѧ��������
	student Sarray[5];
	//��ʦ������
	teacher Tarray[3];
	//ѧ����Ԫ�ظ���
	int Slen = sizeof(Sarray) / sizeof(Sarray[0]);
	//��ʦ�����Ԫ�ظ���
	int len = sizeof(Tarray) / sizeof(Tarray[0]);
	assign(Tarray,len,Slen);
	printall(Tarray,len,Slen);

	system("pause");
	return 0;
}
/*
���桪��������������������������
������  Teacher_A
		������  Student_A����Ϊ��       46
		������  Student_B����Ϊ��       46
		������  Student_C����Ϊ��       41
		������  Student_D����Ϊ��       48
		������  Student_E����Ϊ��       45
������  Teacher_B
		������  Student_A����Ϊ��       62
		������  Student_B����Ϊ��       68
		������  Student_C����Ϊ��       93
		������  Student_D����Ϊ��       80
		������  Student_E����Ϊ��       91
������  Teacher_C
		������  Student_A����Ϊ��       47
		������  Student_B����Ϊ��       40
		������  Student_C����Ϊ��       54
		������  Student_D����Ϊ��       81
		������  Student_E����Ϊ��       74
�밴���������. . .
���ܡ���������������������������
�ܽᡪ��������������������������
*/