#include <iostream>
using namespace std;
//Boundaries, phylum, family, order, class, genus and species

class animal
{
public:
	void species()
	{
		cout<<"动物界"<<endl;
	}
	void genus()
	{
		cout<<"动物门"<<endl;
	}
	void family()
	{
		cout<<"动物科"<<endl;
	}
	void order()
	{
		cout<<"动物目"<<endl;
	}
	void class_name()
	{
		cout<<"动物亚科"<<endl;
	}
	void phylum()
	{
		cout << "动物纲" << endl;
	}

};
class chicken :public animal
{
public:
	void top()
	{
		cout << "鸡纲" << endl;
	}
};
class duck :public animal
{
public:
	void top()
	{
		cout << "鸭纲" << endl;
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