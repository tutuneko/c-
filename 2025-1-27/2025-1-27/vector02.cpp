#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> my_vector01;// ����һ���洢�����Ŀ� vector
	vector<int> my_vector02(5);// ����һ������ 5 �������� vector��ÿ��ֵ��ΪĬ��ֵ��0��
	vector<int> my_vector03(5, 10);// ����һ������ 5 �������� vector��ÿ��ֵ��Ϊ 10
	vector<int> my_vector04{ 1,1,4,5,1,4 };// ��ʼ��һ������Ԫ�ص� vector
	//���Ԫ��
	my_vector01.push_back(114514);

	int len = my_vector04.size();
	cout << "my_vector04��" << my_vector04.size() << "��Ԫ��" << endl;
	cout << "�ֱ��ǣ�(���������� vector �е�Ԫ��)" << endl;
	for (int i = 0;i < len;i++) {
		cout << my_vector04.at(i) <<",";
	}
	
	//ɾ�������ڶ���Ԫ��
	my_vector04.erase(my_vector04.end() - 2);
	//ɾ����һ����������֮�������Ԫ�أ�����һ������
	my_vector04.erase(my_vector04.begin() + 0,my_vector04.begin()+3);
	cout << endl << "�ֱ��ǣ�������ʹ�÷�Χѭ����" << endl;
	for (int element : my_vector04) {
		cout << element << ",";
	}
	cout << endl;
	//���Ԫ��
	my_vector04.clear();
	cout << "��ʣ�£�" << endl;
	for (int i : my_vector04) {
		cout << i << ",";
	}
	//�ж�my_vector04�ǲ��ǿյ�
	if (my_vector04.size() == 0) {
		cout << "û����" << endl;
	}
	system("pause");
	return 0;
}
/*
���桪��������������������������
my_vector04��6��Ԫ��
�ֱ��ǣ�(���������� vector �е�Ԫ��)
1,1,4,5,1,4,
�ֱ��ǣ�������ʹ�÷�Χѭ����
5,4,
��ʣ�£�
û����
�밴���������. . .
���ܡ���������������������������
�ܽᡪ��������������������������
1.vector�Ĺ��ܱ�һ������ǿ��,������Ҳ�深��
*/