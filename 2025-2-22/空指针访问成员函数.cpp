#include <iostream>
using namespace std;
class per
{
public:
	const int age = 18;
	const int num = 114514;
	void showage()
	{
		if (this == NULL)
		{
			return;
		}
		cout << this->age << endl;
	}
	void shownum()
	{
		if (this == NULL)
		{
			return;
		}
		cout << this->num << endl;
	}
};
void func()
{
	per* p = NULL;
	p->showage();
	p->shownum();
}
int main() {
	func();

	cin.get();
	return 0;
}