#include<iostream>
using namespace std;
#include<string>
//2025��1��25�� 11:24:27
/*����������
���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�;�����ṹ�����飬�����д��5��Ӣ�ۡ�
ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����*/

//Ӣ�۵Ľṹ��
struct heroes {
	//����
	string name;
	//����
	int age;
	//�Ա�
	string gender;
};
void Bubblesort(heroes heroesArray[],int len) {
	for (int i = 0;i < len - 1;i++) {
		for (int j = 0; j < len - i - 1;j++) {
			if (heroesArray[j].age > heroesArray[j + 1].age) {
				//����
				heroes temp;
				temp = heroesArray[j];
				heroesArray[j] = heroesArray[j + 1];
				heroesArray[j + 1] = temp;
			}
				
		}

		
	}
	
}
int main() {
	//Ӣ������
	heroes heroesArray[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};
	
	//Ӣ�������Ԫ�ظ���
	int len = sizeof(heroesArray) / sizeof(heroesArray[0]);
	//��ӡ����ǰ��
	cout << "����ǰ��" << endl;
	for (int i = 0;i < len;i++) {
		cout << heroesArray[i].name << "\t" << heroesArray[i].gender
			<< "\t" << heroesArray[i].age << endl;
	}
	//����ð�������������С������������
	Bubblesort(heroesArray, len);
	//��ӡ������
	cout << "�����" << endl;
	for (int i = 0;i < len;i++) {
		cout << heroesArray[i].name << "\t" << heroesArray[i].gender 
			<< "\t" << heroesArray[i].age << endl;
	}
	system("pause");
	return 0;
}
/*
���桪��������������������������
����ǰ��
����    ��      23
����    ��      22
�ŷ�    ��      20
����    ��      21
����    Ů      19
�����
����    Ů      19
�ŷ�    ��      20
����    ��      21
����    ��      22
����    ��      23
�밴���������. . .
���ܡ���������������������������
����ð������
�ܽᡪ��������������������������
��VS�У������һ���������±����п����ǱȽϲ�����
*/