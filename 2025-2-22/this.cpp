#include <iostream>
using namespace std;
class per
{
public:
	per(int age)
	{
		this->age = age;
	}
	per& peradd(per& a)
	{
		this->age += a.age;
		return *this;
	}
	int age;
};
void func()
{
	per per1(1);
	cout << per1.age << endl;
}
void func(int QAQ)
{
	per per2(1), per3(4);
	per2.peradd(per3).peradd(per3).peradd(per3).peradd(per3);
	cout << per2.age << endl;
}
int main() {
	func();
	func(1);
	cin.get();
	return 0;
}