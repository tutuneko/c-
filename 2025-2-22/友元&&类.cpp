#include <iostream>
using namespace std;
class building
{
	friend class goodfriend;
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
	//��������
	goodfriend gf;
	gf.visit();
	cin.get();
	return 0;
}