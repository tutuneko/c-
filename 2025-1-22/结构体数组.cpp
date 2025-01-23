#include<iostream>
using namespace std;
#include<string>
//2025年1月22日 11:55:22
struct personal {
	//年龄
	int age;
	//姓名
	string name;
	//性别
	string gender;
};
int main() {
	//作用：将自定义的结构体放入到数组中方便维护
	//语法：struct 结构体名 数组名[元素个数] = { {}，{}，...{} }
	//创建一个结构体数组
	personal classArray[3] =
	{
		{18,"张三","男"},
		{1,"小宝","浮游生物"},
		{10000,"老王","乌龟"}
	};
	//给结构体数组赋值
	classArray[1].age = 3;
	classArray[1].gender = "环节生物";
	classArray[1].name = "大宝";
	cout << "年龄：\t" << classArray[1].age<<endl<<"姓名：\t"<<classArray[1].name <<endl<<"性别：\t"<<classArray[1].gender << endl;

	system("pause");
	return 0;
}
/*
界面——————————————
年龄：  3
姓名：  大宝
性别：  环节生物
请按任意键继续. . .
功能——————————————
创建一个结构体数组
总结————————————
nai i
*/