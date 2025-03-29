#include <iostream>
using namespace std;
class per
{
public:
	string name;
	int age;
};
class per_A:public per
{
public:
	per_A()
	{
		name = "A_sama";
	}
	
};
class per_B :public per
{
public:
	per_B()
	{
		name = "B_sama";
	}

};
class per_C :public per_A, public per_B
{
};
int main()
{
	per_C test;
	cout << test.per_A::name << endl;
	cout << test.per_B::name << endl;
	//cout << test.per_C::age << endl;
	cin.get();
	return 0;
}