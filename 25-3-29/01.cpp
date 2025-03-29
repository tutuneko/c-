//调和平均数公式:
//2.0 * x * y / (x + y);
#include <iostream>
#include <cctype>
using namespace std;
//数组长度
const int ar_size = 2;
//函数声明
void full_arr(double arr[],bool *choose);
double average(double arr[]);
int main()
{
	//调和平均数数组
	double arr[ar_size];
	//判断
	bool choose = false;
	//top
	cout << "请输入两个数字" << endl;
	while(1){
		//装填数组
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