
#include <iostream>
using namespace std;
class share
{
public:
	void input()
	{
		cout << "�����" << endl;

	}
	void inputt()
	{
		cout << "��������" << endl;
	}
};
class _1 :public share
{
	
};
void C()
{
	_1 __1;
	cout << "C++" << endl;
	__1.input();
	__1.inputt();

}
int main()
{
	
	C();

	cin.get();
	return 0;
}