#include <iostream>
using namespace std;
//�в������ã�û�о���Ĭ��ֵ
int func(int a, int b, int c = 30)
{
	return a + b + c;
}
//��Ĭ��ֵ�Ĳ������ں��棬û�е���ǰ��
//���������뺯��ʵ��ֻ�ܹ�ӵ��һ��Ĭ�ϲ���
int func2(int a, int b, int c);
int main() {
	cout<<func(10, 20) << endl;
	cout << func2(1,2,3) << endl;
	cin.get();
	return 0;
}
int func2(int a, int b = 1, int c = 1)
{
	return a + b + c;
}