#include <iostream>
using namespace std;
class building
{
	friend void func();
public:
	building()
	{
		string sittintroom = "����";
		string kitchen = "����";
		string bedroom = "����";
	}
	string sittintroom;
	string kitchen;
private:
	string bedroom;
};
void func()
{
	building bu;
	bu.kitchen;
	bu.sittintroom;
	bu.bedroom;
}
int main() {
	//��������
	cin.get();
	return 0;
}