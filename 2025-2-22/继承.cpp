#include <iostream>
using namespace std;
//Boundaries, phylum, family, order, class, genus and species

class animal
{
public:
	void species()
	{
		cout<<"�����"<<endl;
	}
	void genus()
	{
		cout<<"������"<<endl;
	}
	void family()
	{
		cout<<"�����"<<endl;
	}
	void order()
	{
		cout<<"����Ŀ"<<endl;
	}
	void class_name()
	{
		cout<<"�����ǿ�"<<endl;
	}
	void phylum()
	{
		cout << "�����" << endl;
	}

};
class chicken :public animal
{
public:
	void top()
	{
		cout << "����" << endl;
	}
};
class duck :public animal
{
public:
	void top()
	{
		cout << "Ѽ��" << endl;
	}
};
void show()
{
	chicken c;
	duck d;
	c.top();
	c.species();
	c.genus();
	c.family();
	c.order();
	c.class_name();
	c.phylum();
	cout << "-------------" << endl;
	d.top();
	d.species();
	d.genus();
	d.family();
	d.order();
	d.class_name();
	d.phylum();
}
int main()
{
	show();
	cin.get();
	return 0;
}