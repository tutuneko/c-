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
		cout << "��ˮ" << endl;
	}
	void pao()
	{
		cout << "�ݲ�" << endl;
	}
	void put()
	{
		cout << "����������" << endl;
	}
	void add()
	{
		cout << "�������" << endl;
	}
	void fin()
	{
		cout << "���!" << endl;
	}
};
class coffee :public drink
{
	void water()
	{
		cout << "��ˮ" << endl;
	}
	void pao()
	{
		cout << "�ݲ�" << endl;
	}
	void put()
	{
		cout << "����������" << endl;
	}
	void add()
	{
		cout << "�������" << endl;
	}
	void fin()
	{
		cout << "���!" << endl;
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