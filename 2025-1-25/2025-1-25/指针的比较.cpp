#include<iostream>
using namespace std;

int main() {
	int Array[2] = { 10,50 };
	int* ptr1 = &Array[0];
	int* ptr2 = &Array[1];
	int* ptr3 = &Array[0];
	if (*ptr1 == *ptr2) {
		cout << "ptr1=ptr2" << endl;
	}
	if (*ptr1 != *ptr2) {
		cout << "ptr1!=ptr2" << endl;
	}
	if (*ptr1 == *ptr3) {
		cout << "ptr1=ptr3" << endl;
	}
	if (*ptr1 < *ptr2) {
		cout << "ptr1<ptr2" << endl;
	}
	if (*ptr1 > *ptr2) {
		cout << "ptr1>ptr2" << endl;
	}
	if (*ptr1 <= *ptr2) {
		cout << "ptr1<=ptr2" << endl;
	}
	if (*ptr1 >= *ptr2) {
		cout << "ptr1>=ptr2" << endl;
	}
	if (*ptr1 < *ptr3) {
		cout << "ptr1<ptr3" << endl;
	}
	if (*ptr1 > *ptr3) {
		cout << "ptr1>ptr3" << endl;
	}
	if (*ptr1 <= *ptr3) {
		cout << "ptr1<=ptr3" << endl;
	}
	if (*ptr1 >= *ptr3) {
		cout << "ptr1>=ptr3" << endl;
	}

	system("pause");
	return 0;
}
/*
���桪��������������������������
ptr1!=ptr2
ptr1=ptr3
ptr1<ptr2
ptr1<=ptr2
ptr1<=ptr3
ptr1>=ptr3
�밴���������. . .
���ܡ���������������������������
ָ��ıȽ��������ʹ��
�ܽᡪ��������������������������
1.ָ��ıȽ��������ʹ�ÿ����ж�����ָ���Ƿ�ָ��ͬһ���ڴ��ַ�������ж�ָ���Ƿ�ָ���ڴ��ַ���ض�λ�á�
2.ָ��ıȽ������������==��!=��<��>��<=��>=��
3.��ϵ�Ƚϣ��� <, >, <=, >=��
��ͬһ�����Ԫ��֮�������������ġ����ָ�벻����ͬһ�����飬��ϵ�ȽϵĽ����δ����ġ�
4.�ڱȽ�ָ��֮ǰ��ȷ��ָ�벻�ǿ�ָ�루nullptr����������ܻᵼ��δ������Ϊ��
*/