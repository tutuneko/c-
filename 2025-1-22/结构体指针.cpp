#include<iostream>
using namespace std;
#include<string>
//2025年1月22日 12:20:42

struct person {
	string name;
	int age;
	string gender;
};

int main() {
	person classArray[3] =
	{
		{"A",18,"♂ "},
		{"B",20,"♀"},
		{"C",22,"♂ "}
	};
	person* p = &classArray[0];
	cout << "姓名" << p->name << endl << "年龄" << p->age << endl << "性别" << p->gender << endl;
	p->age = 44;
	cout << "年龄" << classArray[0].age<< endl;

	system("pause");
	return 0;
}
/*
界面——————————————
姓名A
年龄18
性别♂
年龄44
请按任意键继续. . .
功能——————————————
使用指针输出，访问数组
总结+——————————————

*/