#include <iostream>
using namespace std;
class fa
{
	public:
	//纯虚函数
	//只要有一个纯虚函数,这个类就被称为抽象类
	//无法实体化对象
	//抽象类的子类必须要重写父类的纯虚函数,否则也是抽象类
	virtual string func() = 0;

};
class son :public fa
{
	string func()
	{
		return "nigama";
	}
};
int main()
{
	fa* fa_1 = new son;
	cout << fa_1->func() << endl;
	cin.get();
	return 0;
}