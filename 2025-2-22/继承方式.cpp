#include <iostream>
using namespace std;

class father
{
public:
	int age;
protected:
	int height;
private:
	int weight;
};
class son_01 : public father
{
public:
	son_01()
	{
		age = 18;
		height = 170;
		//weight = 70;Œﬁ∑®∑√Œ 
	
	}
};
class son_02 : protected father
{
public:
	son_02()
	{
		age = 19;
		height = 175;
		//weight = 75;
	}
};
class son_03 : private father
{
public:
	son_03()
	{
		age = 20;
		height = 180;
		//weight = 80;
	}
};