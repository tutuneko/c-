#include<iostream>
using namespace std;
#include<string>
//2025年1月22日 19:04:20
struct A {
	string name;
	int age;

};
void S(A AL) {
	AL.age = AL.age + 100;
	cout << "姓名：" << AL.name << "年龄：" << AL.age << endl;
}
void SS(A* AL) {
	AL->age = AL->age + 100;
	cout << "姓名：" << AL->name << "年龄：" << AL->age << endl;
}
int main(){
	A AL = { "AA",18 };
	S(AL);
	cout << "值传递：\t" << AL.name << "\t" << AL.age << endl;
	SS(&AL);
	cout << "地址传递：\t" << AL.name << "\t" << AL.age << endl;
	system("pause");
	return 0;
}
/*
界面——————————————
姓名：AA年龄：118
值传递：        AA      18
姓名：AA年龄：118
地址传递：      AA      118
请按任意键继续. . .
功能——————————————
通过地址传递与值传递打印结构体
总结——————————————
值传递占用内存比地址传递大，但不修改值，地址占用内存小，但形参影响实参
*/