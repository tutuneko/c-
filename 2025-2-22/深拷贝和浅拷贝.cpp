#include <iostream>
using namespace std;
class t
{
public:
	int age;
	int* gao;
	t()
	{
		cout << "�޲ι��캯��" << endl;
	}
	t(int a,int b)
	{
		age = a;
		gao = new int(b);
		cout << "�вι��캯��" << endl;
	}
	t(const t& t2)
	{
		cout << "��������" << endl;
		age = t2.age;
		gao = new int(*t2.gao);

	}
	~t()
	{
		cout << "��������" << endl;
		if (gao != NULL)
		{
			delete gao;
			cout << "��ɾ��!" << endl;
			gao = NULL;
			cout << "���ÿ�!" << endl;
		}
		
	}

};
void func()
{
	t t1(14,174);
	cout << t1.age <<"\t" << *t1.gao << endl;
	/*t t3(t1);
	cout << t3.age << endl;*/
}
int main() {
	func();
	cin.get();
	return 0;
}