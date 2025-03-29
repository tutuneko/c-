
#include <iostream>
using namespace std;
class share
{
public:
	void input()
	{
		cout << "Äã¸ÉÂï" << endl;

	}
	void inputt()
	{
		cout << "¹þ¹þ°¥ßÏ" << endl;
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