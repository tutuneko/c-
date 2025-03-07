#include <iostream>
using namespace std;
class t
{
public:
	int age;
	int* gao;
	t()
	{
		cout << "无参构造函数" << endl;
	}
	t(int a,int b)
	{
		age = a;
		gao = new int(b);
		cout << "有参构造函数" << endl;
	}
	t(const t& t2)
	{
		cout << "拷贝函数" << endl;
		age = t2.age;
		gao = new int(*t2.gao);

	}
	~t()
	{
		cout << "析构函数" << endl;
		if (gao != NULL)
		{
			delete gao;
			cout << "已删除!" << endl;
			gao = NULL;
			cout << "已置空!" << endl;
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