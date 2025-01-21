#include<iostream>
#include<string>
using namespace std;
//2025年1月21日 18:54:28
//结构体属于用户自定义的数据类型允许用户存储不同的数据类型
//语法：struct 结构体名{结构体成员列表}；
struct personal {
	//名字
	string name;  
	//年龄
	int age;	  
	//性别
	string gender;
}C;//顺便创建变量，但一般不会使用

int main() {
	//·struct 结构体名 变量名
	//struct关键字可以省略
	personal A;
	A.name = "A sama";
	A.age = 20;
	A.gender = "男";
	cout << "姓名：\t" << A.name << "  年龄：\t" << A.age << "  性别：\t" << A.gender << endl;
	
	//·struct 结构体名 变量名 = { 成员1值，成员2值.. }
	struct personal B = { "B sama",15,"女" };
	cout << "姓名：\t" << B.name << "  年龄：\t" << B.age << "  性别：\t" << B.gender << endl;;//这是一个空语句;;无伤大雅，反正不会报错
	//·定义结构体时顺便创建变量
	C.name = "C sama";
	C.age = 80;
	C.gender = "男";
	cout << "姓名：\t" << C.name << "  年龄：\t" << C.age << "  性别：\t" << C.gender << endl;
	system("pause");
	return 0;
}
/*
界面——————————————
姓名：  A sama  年龄：  20  性别：      男
姓名：  B sama  年龄：  15  性别：      女
姓名：  C sama  年龄：  80  性别：      男
请按任意键继续. . .
功能——————————————
创建结构体
总结——————————————

*/