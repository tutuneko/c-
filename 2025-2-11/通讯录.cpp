#include<iostream>
#include<vector>
#include<string>
using namespace std;
//绘制菜单界面，并封装菜单函数
void showMenu() {
	cout << "\t通讯录\t" << endl;
	cout << "**************************" << endl;
	cout << "**\t 1.打开    \t**" << endl;
	cout << "**************************" << endl;
	cout << "**\t 2.添加    \t**" << endl;
	cout << "**************************" << endl;
	cout << "**\t 3.删除     \t**" << endl;
	cout << "**************************" << endl;
	cout << "**\t 4.查找    \t**" << endl;
	cout << "**************************" << endl;
	cout << "**\t 5.修改     \t**" << endl;
	cout << "**************************" << endl;
	cout << "**\t 6.清空 \t**" << endl;
	cout << "**************************" << endl;
	cout << "**\t 7.退出    \t**" << endl;
	cout << "**************************" << endl;
	//提示输入
	cout << endl;
	cout << "请输入对应的数字：\t";
}
//建立通讯录结构体
struct dw {
	//名字
	string name;
	//性别
	string gender;
	//年龄
	int age;
	//手机号码
	long int num;
	//住址
	string where;

};

//打开通讯录
void open(vector<dw> &D_W) {
	//清空屏幕（打开新界面）
	system("cls");
	//声明函数
	
	//将联系人个数赋值n
	//通讯录的个数
	int n = D_W.size();
	//判断联系人是不是空的
	if (n == 0) {
		//提示
		cout << "\t还没有添加联系人\t" << endl;
		
	}
	else {
		//打印联系人信息
		for (int i = 0;i < n;i++) {
			cout << "姓名：" << D_W[i].name << endl;
			cout << "性别：" << D_W[i].gender << endl;
			cout << "年龄：" << D_W[i].age << endl;
			cout << "号码：" << D_W[i].num << endl;
			cout << "住址：" << D_W[i].where << endl;
			cout << "----------------------------------------" << endl;
		}
	}
	cin.ignore();
	//等待输入
	cin.get();
}
//添加
void add(vector<dw>& D_W) {
	//清空屏幕（打开新界面）
	system("cls");
	//定义一个temp变量，用来存储新增联系人的信息
	dw temp;
	//补全元素信息
	cout<<"请输入姓名：";
	cin>>temp.name;
	cout<<"请输入性别：";
	cin>>temp.gender;
	cout<<"请输入年龄：";
	cin>>temp.age;
	cout<<"请输入手机号码：";
	cin>>temp.num;
	cout<<"请输入住址：";
	cin>>temp.where;
	//将新增联系人信息添加到D_W数组中
		D_W.push_back(temp);
	//提示
	system("cls");
	cout << "\t添加成功\t" << endl;
	cin.ignore();
	//等待输入
	cin.get();

}
//删除
void del(vector<dw>& D_W) {
	system("cls");
	cout << "输入要删除的联系人姓名：" << endl;
	string f_name;
	cin >> f_name;
	//遍历数组，找到要删除的联系人，并删除
	for (int i = 0;i < D_W.size();i++) {
		if (D_W[i].name == f_name) {
			D_W.erase(D_W.begin() + i);
			cout << "删除成功" << endl;
			break;
		}
	}
	cin.ignore();
	cin.get();

}
//查找
void find(vector<dw>& D_W) {
	system("cls");
	cout << "输入要查找的联系人姓名：" << endl;
	string f_name;
	cin >> f_name;
	bool found = false;  // 标记是否找到联系人

	for (int i = 0; i < D_W.size(); i++) {
		if (D_W[i].name == f_name) {
			cout << "----------------------" << endl;
			cout << "姓名：" << D_W[i].name << endl;
			cout << "性别：" << D_W[i].gender << endl;
			cout << "年龄：" << D_W[i].age << endl;
			cout << "号码：" << D_W[i].num << endl;
			cout << "住址：" << D_W[i].where << endl;
			found = true;
		}
	}

	if (!found) {
		cout << "联系人不存在" << endl;
	}

	cin.ignore();
	cin.get();
}


//修改
void fix(vector<dw>& D_W) {
	system("cls");
	cout << "输入要修改的联系人姓名：" << endl;
	string f_name;
	cin >> f_name;
	bool found = false;

	for (int i = 0; i < D_W.size(); i++) {
		if (D_W[i].name == f_name) {
			cout << "找到联系人：" << endl;
			cout << "姓名：" << D_W[i].name << endl;
			cout << "性别：" << D_W[i].gender << endl;
			cout << "年龄：" << D_W[i].age << endl;
			cout << "号码：" << D_W[i].num << endl;
			cout << "住址：" << D_W[i].where << endl;

			cout << "是否修改此联系人？(y/n): ";
			char choice;
			cin >> choice;

			if (choice == 'y' || choice == 'Y') {
				cout << "请输入修改后的信息：" << endl;
				cout << "姓名："; cin >> D_W[i].name;
				cout << "性别："; cin >> D_W[i].gender;
				cout << "年龄："; cin >> D_W[i].age;
				cout << "号码："; cin >> D_W[i].num;
				cout << "住址："; cin >> D_W[i].where;
				cout << "修改成功！" << endl;
			}
			found = true;
		}
	}

	if (!found) {
		cout << "联系人不存在" << endl;
		cin.ignore();
	}

	
	cin.get();
}

//删除所有联系人
void del_all(vector<dw>& D_W) {
	system("cls");
	//提示
	cout << "确定要删除所有联系人吗？(y/n)" << endl;
	//输入
	char c;
	cin >> c;
	//判断输入
	if (c == 'y' || c == 'Y') {
		D_W.clear();
		cout << "删除成功" << endl;
	}
	else {
		cout << "取消删除" << endl;
	}
	cin.ignore();
	cin.get();
}

//退出
void exit(int* *z) {
	**z -= **z;
	
}

//用来存储各类函数声明,并判断
void tell(int a,int* z,vector<dw> *D_W) {
	switch (a)
	{
	case 1:
		open(*D_W);
		break;
	case 2:
		add(*D_W);
		break;
	case 3:
		del(*D_W);
		break;
	case 4:
		find(*D_W);
		break;
	case 5:
		fix(*D_W);
		break;
	case 6:
		del_all(*D_W);
		break;
	case 7:
		exit(&z);
		break;
	default:
		cout << "请重新输入" << endl;
		break;  
	}
	
}
int main() {
	//定义dw动态数组
	vector<dw> D_W;
	//死循环判断
	int z = 1;
	while (z) {
		system("cls");
		//调用菜单函数
		showMenu();
		//用户选择
		int a;
		//将用户选择的数赋值给a
		cin >> a;
		//调用tell函数判断
		tell(a,&z,&D_W);
		//回到主界面
		continue;
	}
	return 0;
	
}
