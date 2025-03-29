#include <iostream>
using namespace std;
//class S
//{
//public:
//	double num1, num2;
//	double func(string oper)
//	{
//		if (oper == "+")
//		{
//			return num1 + num2;
//		}
//		else if (oper == "-")
//		{
//			return num1 - num2;
//		}
//
//		else if (oper == "*")
//		{
//			return num1 * num2;
//		}
//		else if (oper == "/")
//		{
//			return num1 / num2;
//		}
//	}
//};
class calu
{
public:
	double num1, num2;
	virtual double suan()
	{
		return 0;
	}
};
class add :public calu
{
public:
	double suan()
	{
		return num1 + num2;
	}
};
class chu :public calu
{
public:
	double suan()
	{
		return num1 / num2;
	}
};
class jian :public calu
{
public:
	double suan()
	{
		return num1 - num2;
	}
};
class cheng :public calu
{
public:
	double suan()
	{
		return num1 * num2;
	}
};
int main()
{
	/*S S1{ 20,2 };
	cout << S1.func("+") << endl;
	cout << S1.func("-") << endl;
	cout << S1.func("*") << endl;
	cout << S1.func("/") << endl;*/


	calu* calu_1 = new add;
	calu_1->num1 = 24;
	calu_1->num2 = 12;
	cout << calu_1->suan() << endl;
	calu* calu_2 = new jian;
	calu_2->num1 = 24;
	calu_2->num2 = 12;
	cout << calu_2->suan() << endl;
	calu* calu_4 = new cheng;
	calu_2->num1 = 24;
	calu_2->num2 = 12;
	cout << calu_4->suan() << endl;
	calu* calu_5 = new chu;
	calu_2->num1 = 24;
	calu_2->num2 = 12;
	cout << calu_5->suan() << endl;
	cin.get();
	return 0;
}