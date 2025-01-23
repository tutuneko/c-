#include<iostream>
using namespace std;
#include<string>
struct P {
	string name;
	int age;
};
static void printfPC(const P* P1) {

	//P1->age = +100;因为加了const所以不让修改值了
	cout << P1->name << "\t" << P1->age << endl;
}
void printfP(P *P1){
	
	P1->age = +100;//没加const可以修改
	cout << P1->name <<"\t" << P1->age<< endl;
}

//2025年1月23日 17:15:22
int main() {
	P P1 = { "AA",18 };
	printfPC(&P1);
	
	printfP(&P1);
	system("pause");
	return 0;
}
/*
界面——————————————
AA      18
AA      100
请按任意键继续. . .
功能——————————————
通过函数打印
总结——————————————
const可以使指针传递时变量不改变
*/