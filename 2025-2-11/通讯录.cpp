#include<iostream>
#include<vector>
#include<string>
using namespace std;
//���Ʋ˵����棬����װ�˵�����
void showMenu() {
	cout << "\tͨѶ¼\t" << endl;
	cout << "**************************" << endl;
	cout << "**\t 1.��    \t**" << endl;
	cout << "**************************" << endl;
	cout << "**\t 2.���    \t**" << endl;
	cout << "**************************" << endl;
	cout << "**\t 3.ɾ��     \t**" << endl;
	cout << "**************************" << endl;
	cout << "**\t 4.����    \t**" << endl;
	cout << "**************************" << endl;
	cout << "**\t 5.�޸�     \t**" << endl;
	cout << "**************************" << endl;
	cout << "**\t 6.��� \t**" << endl;
	cout << "**************************" << endl;
	cout << "**\t 7.�˳�    \t**" << endl;
	cout << "**************************" << endl;
	//��ʾ����
	cout << endl;
	cout << "�������Ӧ�����֣�\t";
}
//����ͨѶ¼�ṹ��
struct dw {
	//����
	string name;
	//�Ա�
	string gender;
	//����
	int age;
	//�ֻ�����
	long int num;
	//סַ
	string where;

};

//��ͨѶ¼
void open(vector<dw> &D_W) {
	//�����Ļ�����½��棩
	system("cls");
	//��������
	
	//����ϵ�˸�����ֵn
	//ͨѶ¼�ĸ���
	int n = D_W.size();
	//�ж���ϵ���ǲ��ǿյ�
	if (n == 0) {
		//��ʾ
		cout << "\t��û�������ϵ��\t" << endl;
		
	}
	else {
		//��ӡ��ϵ����Ϣ
		for (int i = 0;i < n;i++) {
			cout << "������" << D_W[i].name << endl;
			cout << "�Ա�" << D_W[i].gender << endl;
			cout << "���䣺" << D_W[i].age << endl;
			cout << "���룺" << D_W[i].num << endl;
			cout << "סַ��" << D_W[i].where << endl;
			cout << "----------------------------------------" << endl;
		}
	}
	cin.ignore();
	//�ȴ�����
	cin.get();
}
//���
void add(vector<dw>& D_W) {
	//�����Ļ�����½��棩
	system("cls");
	//����һ��temp�����������洢������ϵ�˵���Ϣ
	dw temp;
	//��ȫԪ����Ϣ
	cout<<"������������";
	cin>>temp.name;
	cout<<"�������Ա�";
	cin>>temp.gender;
	cout<<"���������䣺";
	cin>>temp.age;
	cout<<"�������ֻ����룺";
	cin>>temp.num;
	cout<<"������סַ��";
	cin>>temp.where;
	//��������ϵ����Ϣ��ӵ�D_W������
		D_W.push_back(temp);
	//��ʾ
	system("cls");
	cout << "\t��ӳɹ�\t" << endl;
	cin.ignore();
	//�ȴ�����
	cin.get();

}
//ɾ��
void del(vector<dw>& D_W) {
	system("cls");
	cout << "����Ҫɾ������ϵ��������" << endl;
	string f_name;
	cin >> f_name;
	//�������飬�ҵ�Ҫɾ������ϵ�ˣ���ɾ��
	for (int i = 0;i < D_W.size();i++) {
		if (D_W[i].name == f_name) {
			D_W.erase(D_W.begin() + i);
			cout << "ɾ���ɹ�" << endl;
			break;
		}
	}
	cin.ignore();
	cin.get();

}
//����
void find(vector<dw>& D_W) {
	system("cls");
	cout << "����Ҫ���ҵ���ϵ��������" << endl;
	string f_name;
	cin >> f_name;
	bool found = false;  // ����Ƿ��ҵ���ϵ��

	for (int i = 0; i < D_W.size(); i++) {
		if (D_W[i].name == f_name) {
			cout << "----------------------" << endl;
			cout << "������" << D_W[i].name << endl;
			cout << "�Ա�" << D_W[i].gender << endl;
			cout << "���䣺" << D_W[i].age << endl;
			cout << "���룺" << D_W[i].num << endl;
			cout << "סַ��" << D_W[i].where << endl;
			found = true;
		}
	}

	if (!found) {
		cout << "��ϵ�˲�����" << endl;
	}

	cin.ignore();
	cin.get();
}


//�޸�
void fix(vector<dw>& D_W) {
	system("cls");
	cout << "����Ҫ�޸ĵ���ϵ��������" << endl;
	string f_name;
	cin >> f_name;
	bool found = false;

	for (int i = 0; i < D_W.size(); i++) {
		if (D_W[i].name == f_name) {
			cout << "�ҵ���ϵ�ˣ�" << endl;
			cout << "������" << D_W[i].name << endl;
			cout << "�Ա�" << D_W[i].gender << endl;
			cout << "���䣺" << D_W[i].age << endl;
			cout << "���룺" << D_W[i].num << endl;
			cout << "סַ��" << D_W[i].where << endl;

			cout << "�Ƿ��޸Ĵ���ϵ�ˣ�(y/n): ";
			char choice;
			cin >> choice;

			if (choice == 'y' || choice == 'Y') {
				cout << "�������޸ĺ����Ϣ��" << endl;
				cout << "������"; cin >> D_W[i].name;
				cout << "�Ա�"; cin >> D_W[i].gender;
				cout << "���䣺"; cin >> D_W[i].age;
				cout << "���룺"; cin >> D_W[i].num;
				cout << "סַ��"; cin >> D_W[i].where;
				cout << "�޸ĳɹ���" << endl;
			}
			found = true;
		}
	}

	if (!found) {
		cout << "��ϵ�˲�����" << endl;
		cin.ignore();
	}

	
	cin.get();
}

//ɾ��������ϵ��
void del_all(vector<dw>& D_W) {
	system("cls");
	//��ʾ
	cout << "ȷ��Ҫɾ��������ϵ����(y/n)" << endl;
	//����
	char c;
	cin >> c;
	//�ж�����
	if (c == 'y' || c == 'Y') {
		D_W.clear();
		cout << "ɾ���ɹ�" << endl;
	}
	else {
		cout << "ȡ��ɾ��" << endl;
	}
	cin.ignore();
	cin.get();
}

//�˳�
void exit(int* *z) {
	**z -= **z;
	
}

//�����洢���ຯ������,���ж�
void tell(int a,int* z,vector<dw> *D_W) {
	switch (a)
	{
	case 1:
		open(*D_W);
		break;
	case 2:
		add(*D_W);
		break;
	case 3:
		del(*D_W);
		break;
	case 4:
		find(*D_W);
		break;
	case 5:
		fix(*D_W);
		break;
	case 6:
		del_all(*D_W);
		break;
	case 7:
		exit(&z);
		break;
	default:
		cout << "����������" << endl;
		break;  
	}
	
}
int main() {
	//����dw��̬����
	vector<dw> D_W;
	//��ѭ���ж�
	int z = 1;
	while (z) {
		system("cls");
		//���ò˵�����
		showMenu();
		//�û�ѡ��
		int a;
		//���û�ѡ�������ֵ��a
		cin >> a;
		//����tell�����ж�
		tell(a,&z,&D_W);
		//�ص�������
		continue;
	}
	return 0;
	
}
