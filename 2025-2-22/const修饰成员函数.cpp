#include <iostream>
using namespace std;
class per
{
public:
	int a;
	mutable int b;
	void func()const
	{
		//this->a = 1;
		this->b = 1;
	}
};
void func()
{
	per per1;
	per1.func();
	cout << per1.a <<"(没有定义)" << "\t" << per1.b << endl;
}
void func(int a)
{
	const per per1 = {1,2};
	//per1.a = 1;
	per1.b = 1;
	cout << per1.a << "\t" << per1.b << endl;
	per1.func();
	cout << per1.a << "\t" << per1.b << endl;
}
int main() {
	func();
	func(1);
	cin.get();
	return 0;
}