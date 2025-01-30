#include<iostream>
using namespace std;
#include<string>
//2025年1月25日 11:24:27
/*案例描述：
设计一个英雄的结构体，包括成员姓名，年龄，性别;创建结构体数组，数组中存放5名英雄。
通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。*/

//英雄的结构体
struct heroes {
	//姓名
	string name;
	//年龄
	int age;
	//性别
	string gender;
};
void Bubblesort(heroes heroesArray[],int len) {
	for (int i = 0;i < len - 1;i++) {
		for (int j = 0; j < len - i - 1;j++) {
			if (heroesArray[j].age > heroesArray[j + 1].age) {
				//互换
				heroes temp;
				temp = heroesArray[j];
				heroesArray[j] = heroesArray[j + 1];
				heroesArray[j + 1] = temp;
			}
				
		}

		
	}
	
}
int main() {
	//英雄数组
	heroes heroesArray[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};
	
	//英雄数组的元素个数
	int len = sizeof(heroesArray) / sizeof(heroesArray[0]);
	//打印排序前的
	cout << "排序前：" << endl;
	for (int i = 0;i < len;i++) {
		cout << heroesArray[i].name << "\t" << heroesArray[i].gender
			<< "\t" << heroesArray[i].age << endl;
	}
	//利用冒泡排序依年龄大小进行升序排列
	Bubblesort(heroesArray, len);
	//打印排序后的
	cout << "排序后：" << endl;
	for (int i = 0;i < len;i++) {
		cout << heroesArray[i].name << "\t" << heroesArray[i].gender 
			<< "\t" << heroesArray[i].age << endl;
	}
	system("pause");
	return 0;
}
/*
界面——————————————
排序前：
刘备    男      23
关羽    男      22
张飞    男      20
赵云    男      21
貂蝉    女      19
排序后：
貂蝉    女      19
张飞    男      20
赵云    男      21
关羽    男      22
刘备    男      23
请按任意键继续. . .
功能——————————————
利用冒泡排序
总结——————————————
在VS中，如果有一个操作符下报错，有可能是比较不是数
*/