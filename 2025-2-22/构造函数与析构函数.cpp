#include <iostream>
using namespace std;
class per
{
public:
	per()
	{
		cout << "����һ�����캯��" << endl;
	}
	~per()
	{
		cout << "����һ����������" << endl;
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