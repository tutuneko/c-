#include <iostream>
using namespace std;
class fa
{
public:
	fa()
	{
		age = 32;
	}
	int age;
	void func()
	{
		cout << "fa类的" << endl;
	}
	
};
class son :public fa
{
public:
	son()
	{
		age = 20;
	}
	int age;
	void func()
	{
		cout << "son类的" << endl;
	}
};
int  main()
{
	son son_1;
	cout << son_1.age << endl;
	cout << son_1.fa::age << endl;

	son_1.func();
	son_1.fa::func();
	cin.get();
	return 0;
}