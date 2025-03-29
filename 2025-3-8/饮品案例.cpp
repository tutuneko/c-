#include <iostream>
using namespace std;
class drink
{
public:
	virtual void water() = 0;
	virtual void pao() = 0;
	virtual void put() = 0;
	virtual void add() = 0;
	virtual void fin() = 0;
	void func()
	{
		water();
		pao();
		put();
		add();
		fin();
	}
};
class tea :public drink
{
	void water() 
	{
		cout << "烧水" << endl;
	}
	void pao()
	{
		cout << "泡茶" << endl;
	}
	void put()
	{
		cout << "倒到杯子里" << endl;
	}
	void add()
	{
		cout << "添加佐料" << endl;
	}
	void fin()
	{
		cout << "完成!" << endl;
	}
};
class coffee :public drink
{
	void water()
	{
		cout << "烧水" << endl;
	}
	void pao()
	{
		cout << "泡茶" << endl;
	}
	void put()
	{
		cout << "倒到杯子里" << endl;
	}
	void add()
	{
		cout << "添加佐料" << endl;
	}
	void fin()
	{
		cout << "完成!" << endl;
	}
};
void make(drink* D1)
{
	D1->func();
}
int main()
{
	make(new tea);
	cout << "---------------------" << endl;
	make(new coffee);
	cin.get();
	return 0;
}