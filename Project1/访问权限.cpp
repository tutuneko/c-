#include <iostream>
#include <string>
using namespace std;
//共有权限 public    都可以访问
//保护权限 protected 类内可以访问，类外不行。子级继承父级
//私有权限 private   类内可以访问，类外不行。子级不继承父级
class stu
{
public:
	string name;
protected:
	string genter;
private:
	int num;

};
int main() { 
	stu stu_01;
	stu_01.name = "张三";
	//stu_01.genter = "男";
	//stu_01.num = 114514;
	cin.get();
	return 0;
}