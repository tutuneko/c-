//����ƽ������ʽ:
//2.0 * x * y / (x + y);
#include <iostream>
#include <cctype>
using namespace std;
//���鳤��
const int ar_size = 2;
//��������
void full_arr(double arr[],bool *choose);
double average(double arr[]);
int main()
{
	//����ƽ��������
	double arr[ar_size];
	//�ж�
	bool choose = false;
	//top
	cout << "��������������" << endl;
	while(1){
		//װ������
		full_arr(arr, &choose);
		if (choose == true)
		{
			cout << average(arr) << endl;
			break;
		}
	}
	
	/*for (int i = 0;i < ar_size;i++)
	{
		cout << arr[i] << endl;
	}*/
	cin.get();
	return 0;
}
void full_arr(double arr[],bool *choose)
{
	int address = 0;
	while (address < ar_size && cin >> arr[address]) 
	{
		if (arr[address] == 0) return;
		address++;
	}

}
double average(double arr[])
{
	int address = 0;
	double x = arr[address];
	double y = arr[address + 1];
	double arr_average = 2 * x * y / (x + y);
	return arr_average;
}