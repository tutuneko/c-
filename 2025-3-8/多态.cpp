#include <iostream>
using namespace std;
class animnal
{
public:
	virtual void say()
	{
		cout << "动物说话" << endl;
	}
};
class cat :public animnal
{
public:
	void say()
	{
		cout << "猫在说话" << endl;
	}

};
void tell(animnal &test)
{
	test.say();
}
void func()
{
	cat cat_test;
	tell(cat_test);
}
int main()
{
	func();
	cin.get();
	return 0;
}