#include<iostream>
#include<vector>
using namespace std;
//2025��1��17�� 15:17:56
int main() {
	vector<int> vec1;//Ĭ�Ϲ��캯��������һ���յ�vector
	vector<int> vec2(5, 1);//ʹ��5��1��ʼ��һ��vector
	vector<int> vec3(3, 1);//ʹ��3��1��ʼ��һ��vector
	/*----------------------------
	cout << vec2[2] << endl;
	vec2.push_back(3);
	cout << vec2[5] << endl;//[]���������Ԫ�أ�������5��ʼ,������5���������3
	------------------------------*/
	cout << "vec1:" << endl;
	
	
	//��ӡvector������Ԫ��

	for (int i = 0;i < vec1.size();i++) {//����vector ͨ������������ÿ��Ԫ�ء�
		cout << vec1[i]  <<"  " ;
	}

	cout << endl << "vec2:" << endl;
	for (int a = 0;a < vec2.size();a++) {
		cout << vec2[a]   <<"  " ;
	}

	cout << endl << "vec3:" << endl;
	for (int b = 0;b < vec3.size();b++) {
		cout << vec3[b]   <<"  " ;
	}
	cout << endl;
	cout << endl;

	if (vec1.empty()) {//�ж�vector�Ƿ�Ϊ��
		cout << "vec1:" << endl << "there have nothing";
	}
	if (vec2.empty()) {
		cout << "vec2:" << endl << "there have nothing";
	}
	if (vec3.empty()) {
		cout << "vec3:" << endl << "there have nothing";
	}
	cout << endl;
	cout << endl;

	cout << "vec�������Ԫ��" << endl << "vec2�Ƴ�����Ԫ��"<<endl;
	cout << endl;

	vec1.push_back(1);//���Ԫ�ص�vectorĩβ
	vec1.push_back(1);
	vec1.push_back(1);

	vec2.pop_back();//�Ƴ�vectorĩβ��Ԫ��
	vec2.pop_back();

	cout << "vec1:" << endl;

	//��ӡvector������Ԫ��
	for (int i = 0;i < vec1.size();i++) {
		cout << vec1[i] << "  ";
	}

	cout << endl << "vec2:" << endl;
	for (int a = 0;a < vec2.size();a++) {
		cout << vec2[a] << "  ";
	}

	cout << endl << "vec3:" << endl;
	for (int b = 0;b < vec3.size();b++) {
		cout << vec3[b] << "  ";
	}
	cout << endl;
	cout  << endl;
	system("pause");
	return 0;
}
/*
���桪��������������������������
vec1:

vec2:
1  1  1  1  1
vec3:
1  1  1

vec1:
there have nothing

vec�������Ԫ��
vec2�Ƴ�����Ԫ��
vec1:
1  1  1
vec2:
1  1  1
vec3:
1  1  1

�밴���������. . .
���ܡ���������������������������
1.�����յ�vector
2.ʹ��ָ��������Ԫ�س�ʼ��vector
3.�ж�vector�Ƿ�Ϊ��
4.��vector���Ԫ��
5.��vector�Ƴ�Ԫ��
6.��ӡvector������Ԫ��
�ܽᡪ��������������������������
1.vector��C++�е�һ�����������Դ洢��ͬ���͵����ݣ����Զ�̬������С��
2.vector�Ĺ��캯����Ĭ�Ϲ��캯����ָ��������Ԫ�ع��캯����
3.vector�ĳ�Ա������empty()��push_back()��pop_back()�ȡ�
4.vector��������0��ʼ��������[]���������Ԫ�ء�
*/