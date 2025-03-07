#include <iostream>
#include <string>
using namespace std;
class stu
{
public:
	string name;
	int num;
	void show()
	{
		cout << "NAME:" << name << endl;
		cout << "NUMBER:" << num << endl;
	}
	void set(string stu_name,int stu_num)
	{
		name = stu_name;
		num = stu_num;
		
	}
};
int main() {
	stu stu_01;
	stu_01.name = "张三";
	stu_01.num = 114514;
	stu_01.show();

	stu stu_02;
	stu_02.set("李四", 1919810);
	stu_02.show();
	cin.get();
	return 0;
}