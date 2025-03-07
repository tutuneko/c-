#include<iostream>
using namespace std;
int main() {
	cout << "请输入你的身高（单位：m）：_\b";
	unsigned int M_;
	cin >> M_;
	cout << "请输入你的身高（单位：cm）：___\b\b";
	unsigned int CM_;
	cin >> CM_;
	cout << "输入你的体重（单位：kg）：__\b\b";
	unsigned int KG_;
	cin >> KG_;
	
	double ALL = M_ + CM_ / 100;
	double BMI_test = KG_ / (ALL * ALL);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << "你的BMI指标是：" << BMI_test << endl;


	////test
	//cout << M_ << endl;
	//cout << CM_ << endl;
	//cout << KG_ << endl;
	cin.get();
	return 0;
}
