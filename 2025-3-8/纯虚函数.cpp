#include <iostream>
using namespace std;
class fa
{
	public:
	//���麯��
	//ֻҪ��һ�����麯��,�����ͱ���Ϊ������
	//�޷�ʵ�廯����
	//��������������Ҫ��д����Ĵ��麯��,����Ҳ�ǳ�����
	virtual string func() = 0;

};
class son :public fa
{
	string func()
	{
		return "nigama";
	}
};
int main()
{
	fa* fa_1 = new son;
	cout << fa_1->func() << endl;
	cin.get();
	return 0;
}