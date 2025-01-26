/*案例描述：
学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
最终打印出老师数据以及老师所带的学生数据。*/
#include<iostream>
using namespace std;
#include<string>
#include<Ctime>
//2025年1月24日 18:15:53
//学生的结构体
struct student {
	//姓名
	string name;
	//考试分数
	int score;
};
//老师的结构体
struct teacher {
	string name;
	student Sarray[5];

};
//给每位老师分配学生
void assign(teacher Tarray[], int len,int Slen) {
	char name[] = "ABCDE";

	//给老师命名
	for (int i = 0;i < len;i++) {
		Tarray[i].name = "Teacher_";
		Tarray[i].name += name[i];
		for (int j = 0;j < Slen;j++) {
			Tarray[i].Sarray[j].name = "Student_";
			Tarray[i].Sarray[j].name += name[j];
			//创建随机数40~100
			int random = rand() % 61 + 40;
			Tarray[i].Sarray[j].score = random;
		}
	}
	
	
}
void printall(teacher Tarray[],int len,int Slen) {
	//遍历老师的名字
	for (int i = 0;i < len;i++) {
		cout <<"姓名：\t" << Tarray[i].name << endl;
		for (int j = 0;j < Slen;j++) {
			cout <<"\t姓名：\t" << Tarray[i].Sarray[j].name << "分数为：\t" << Tarray[i].Sarray[j].score << endl;
		}
	}


}
int main() {
	//随机数种子
	srand((unsigned int)time(NULL));
	//学生的数组
	student Sarray[5];
	//老师的数组
	teacher Tarray[3];
	//学生的元素个数
	int Slen = sizeof(Sarray) / sizeof(Sarray[0]);
	//老师数组的元素个数
	int len = sizeof(Tarray) / sizeof(Tarray[0]);
	assign(Tarray,len,Slen);
	printall(Tarray,len,Slen);

	system("pause");
	return 0;
}
/*
界面——————————————
姓名：  Teacher_A
		姓名：  Student_A分数为：       46
		姓名：  Student_B分数为：       46
		姓名：  Student_C分数为：       41
		姓名：  Student_D分数为：       48
		姓名：  Student_E分数为：       45
姓名：  Teacher_B
		姓名：  Student_A分数为：       62
		姓名：  Student_B分数为：       68
		姓名：  Student_C分数为：       93
		姓名：  Student_D分数为：       80
		姓名：  Student_E分数为：       91
姓名：  Teacher_C
		姓名：  Student_A分数为：       47
		姓名：  Student_B分数为：       40
		姓名：  Student_C分数为：       54
		姓名：  Student_D分数为：       81
		姓名：  Student_E分数为：       74
请按任意键继续. . .
功能——————————————
总结——————————————
*/