#include<iostream>
using namespace std;
#include<string>
//2025年1月22日 19:04:20
struct t {
	string name;
	int age;

};
void a11(t a1){
	cout << a1.age << endl << a1.name << endl;
}
int main() {
	t a1 = { "A",18 };
	a11(a1);
	system("pause");
	return 0;
}
/*
界面——————————————
18
A
请按任意键继续. . .
功能——————————————
总结——————————————
1.命名变量等，不能用数字开头
*/