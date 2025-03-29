#include <iostream>
using namespace std;
class fa1
{
public:
	fa1()
	{
		age = 30;
	}
	int age;
};
class fa2
{
public:
	fa2()
	{
		age = 35;
	}
	int age;
};
class son :public fa1, public fa2
{
public:
	son()
	{
		age = 10;
	}
	int age;
};
int main()
{
	son son_1;
	cout << son_1.age << endl;
	cout << son_1.fa1::age << endl;
	cout << son_1.fa2::age << endl;

	cin.get();
	return 0;
}