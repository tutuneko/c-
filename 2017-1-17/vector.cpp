#include<iostream>
#include<vector>
using namespace std;
//2025年1月17日 15:17:56
int main() {
	vector<int> vec1;//默认构造函数，创建一个空的vector
	vector<int> vec2(5, 1);//使用5个1初始化一个vector
	vector<int> vec3(3, 1);//使用3个1初始化一个vector
	/*----------------------------
	cout << vec2[2] << endl;
	vec2.push_back(3);
	cout << vec2[5] << endl;//[]运算符访问元素，索引从5开始,不包括5，所以输出3
	------------------------------*/
	cout << "vec1:" << endl;
	
	
	//打印vector包含的元素

	for (int i = 0;i < vec1.size();i++) {//遍历vector 通过索引来访问每个元素。
		cout << vec1[i]  <<"  " ;
	}

	cout << endl << "vec2:" << endl;
	for (int a = 0;a < vec2.size();a++) {
		cout << vec2[a]   <<"  " ;
	}

	cout << endl << "vec3:" << endl;
	for (int b = 0;b < vec3.size();b++) {
		cout << vec3[b]   <<"  " ;
	}
	cout << endl;
	cout << endl;

	if (vec1.empty()) {//判断vector是否为空
		cout << "vec1:" << endl << "there have nothing";
	}
	if (vec2.empty()) {
		cout << "vec2:" << endl << "there have nothing";
	}
	if (vec3.empty()) {
		cout << "vec3:" << endl << "there have nothing";
	}
	cout << endl;
	cout << endl;

	cout << "vec添加三个元素" << endl << "vec2移除两个元素"<<endl;
	cout << endl;

	vec1.push_back(1);//添加元素到vector末尾
	vec1.push_back(1);
	vec1.push_back(1);

	vec2.pop_back();//移除vector末尾的元素
	vec2.pop_back();

	cout << "vec1:" << endl;

	//打印vector包含的元素
	for (int i = 0;i < vec1.size();i++) {
		cout << vec1[i] << "  ";
	}

	cout << endl << "vec2:" << endl;
	for (int a = 0;a < vec2.size();a++) {
		cout << vec2[a] << "  ";
	}

	cout << endl << "vec3:" << endl;
	for (int b = 0;b < vec3.size();b++) {
		cout << vec3[b] << "  ";
	}
	cout << endl;
	cout  << endl;
	system("pause");
	return 0;
}
/*
界面——————————————
vec1:

vec2:
1  1  1  1  1
vec3:
1  1  1

vec1:
there have nothing

vec添加三个元素
vec2移除两个元素
vec1:
1  1  1
vec2:
1  1  1
vec3:
1  1  1

请按任意键继续. . .
功能——————————————
1.创建空的vector
2.使用指定数量的元素初始化vector
3.判断vector是否为空
4.向vector添加元素
5.从vector移除元素
6.打印vector包含的元素
总结——————————————
1.vector是C++中的一种容器，可以存储不同类型的数据，可以动态调整大小。
2.vector的构造函数有默认构造函数和指定数量的元素构造函数。
3.vector的成员函数有empty()、push_back()、pop_back()等。
4.vector的索引从0开始，可以用[]运算符访问元素。
*/