#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> my_vector01;// 创建一个存储整数的空 vector
	vector<int> my_vector02(5);// 创建一个包含 5 个整数的 vector，每个值都为默认值（0）
	vector<int> my_vector03(5, 10);// 创建一个包含 5 个整数的 vector，每个值都为 10
	vector<int> my_vector04{ 1,1,4,5,1,4 };// 初始化一个包含元素的 vector
	//添加元素
	my_vector01.push_back(114514);

	int len = my_vector04.size();
	cout << "my_vector04有" << my_vector04.size() << "个元素" << endl;
	cout << "分别是：(迭代器遍历 vector 中的元素)" << endl;
	for (int i = 0;i < len;i++) {
		cout << my_vector04.at(i) <<",";
	}
	
	//删除倒数第二个元素
	my_vector04.erase(my_vector04.end() - 2);
	//删除第一个到第三个之间的所有元素（包括一和三）
	my_vector04.erase(my_vector04.begin() + 0,my_vector04.begin()+3);
	cout << endl << "分别是：（或者使用范围循环）" << endl;
	for (int element : my_vector04) {
		cout << element << ",";
	}
	cout << endl;
	//清空元素
	my_vector04.clear();
	cout << "还剩下：" << endl;
	for (int i : my_vector04) {
		cout << i << ",";
	}
	//判断my_vector04是不是空的
	if (my_vector04.size() == 0) {
		cout << "没有了" << endl;
	}
	system("pause");
	return 0;
}
/*
界面——————————————
my_vector04有6个元素
分别是：(迭代器遍历 vector 中的元素)
1,1,4,5,1,4,
分别是：（或者使用范围循环）
5,4,
还剩下：
没有了
请按任意键继续. . .
功能——————————————
总结——————————————
1.vector的功能比一般数组强大,但步骤也真繁琐
*/