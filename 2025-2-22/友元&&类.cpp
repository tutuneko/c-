#include <iostream>
using namespace std;
class building
{
	friend class goodfriend;
public:
	building()
	{
		string sittintroom = "客厅";
		string kitchen = "厨房";
		string bedroom = "卧室";
	}
	string sittintroom;
	string kitchen;
private:
	string bedroom;
};
class goodfriend
{
public:
	goodfriend()
	{
		age = 19;
	}
	void visit()
	{
		building bud;
		bud.kitchen;
		bud.sittintroom;
		bud.bedroom;
	}
private:
	int age;
};

int main() {
	//函数调用
	goodfriend gf;
	gf.visit();
	cin.get();
	return 0;
}