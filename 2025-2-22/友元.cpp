#include <iostream>
using namespace std;
class building
{
	friend void func();
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
void func()
{
	building bu;
	bu.kitchen;
	bu.sittintroom;
	bu.bedroom;
}
int main() {
	//函数调用
	cin.get();
	return 0;
}