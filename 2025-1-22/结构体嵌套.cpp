#include<iostream>
using namespace std;
#include<string>
//2025年1月22日 18:17:11
//作用：结构体中的成员可以是另一个结构体
struct S {
	string name;
	int age;
	string gender;
};
struct T {
	string name;
	int id;
	S Sarray;
};
int main() {

	
	T T1;
	T1.name = "AA";
	T1.id = 114514;
	T1.Sarray.age = 15;
	T1.Sarray.name = "A";
	T1.Sarray.gender = "女";

	cout << "老师id " << T1.id << endl << "老师姓名 " << T1.name << endl << "学生年龄 "
		<< T1.Sarray.age << endl << "学生姓名 " << T1.Sarray.name << endl << "学生性别 " << T1.Sarray.gender << endl;
	system("pause");
	return 0;
}
/*
界面————————————
老师id 114514
老师姓名 AA
学生年龄 15
学生姓名 A
学生性别 女
请按任意键继续. . .
功能————————————
总结————————————
*/