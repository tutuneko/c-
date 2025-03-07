#include <iostream>
using namespace std;
class per
{
public:
	per()
	{
		cout << "这是一个构造函数" << endl;
	}
	~per()
	{
		cout << "这是一个析构函数" << endl;
	}
};
void func() 
{
	per per01;
}
int main() {
	func();
	cin.get();
	return 0;
}