#include <iostream>
using namespace std;
class animnal
{
public:
	virtual void speak() = 0;
};
class cat:public animnal
{
public:
	cat(string s1)
	{
		name = new string(s1);
	}
	void speak()
	{
		cout <<*name<< "小猫在说话" << endl;
	}
	string *name;
	~cat()
	{
		if (name != NULL)
		{
			delete name;
			name = NULL;
		}
	}
};
void d()
{
	animnal* _1_ = new cat("sakura");
	_1_->speak();
	delete _1_;
}
int main()
{
	d();
	cin.get();
	return 0;
}