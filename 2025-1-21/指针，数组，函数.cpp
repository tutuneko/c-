#include<iostream>
using namespace std;
//2025��1��21�� 18:24:31
//��ַ���� int*arr ֵ���� int a
void A(int* arr, int a) {
	//ð������
	for (int i = 0;i < a - 1;i++) {
		for (int j = 0;j < a - i - 1;j++) {
			if (arr[j] > arr[j + 1]) {
				//����
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		
	}
}
int main() {
	int arr[10]{ 5,8,7,3,2,1,4,9,6 };
	int a = sizeof(arr) / sizeof(arr[0]);
	A(arr, a);//arr����������׵�ַ�����Բ��ü�ȡ��ַ��&
	//��������
	for (int i = 0;i < a;i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
	system("pause");
	return 0;
}
/*
���桪��������������������������
0       1       2       3       4       5       6       7       8       9
�밴���������. . .
���ܡ���������������������������
ʹ�ú�����װһ��ð���������õ�ַ������ֵ���ݽ�������
�ܽᡪ��������������������������
1.arr������ľ���������׵�ַ������ʹ�õ�ַ����ʱ���ü� &
*/