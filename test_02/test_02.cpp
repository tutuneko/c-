#include<iostream>
using namespace std;
int main() {
	cout << "�����������ߣ���λ��m����_\b";
	unsigned int M_;
	cin >> M_;
	cout << "�����������ߣ���λ��cm����___\b\b";
	unsigned int CM_;
	cin >> CM_;
	cout << "����������أ���λ��kg����__\b\b";
	unsigned int KG_;
	cin >> KG_;
	
	double ALL = M_ + CM_ / 100;
	double BMI_test = KG_ / (ALL * ALL);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << "���BMIָ���ǣ�" << BMI_test << endl;


	////test
	//cout << M_ << endl;
	//cout << CM_ << endl;
	//cout << KG_ << endl;
	cin.get();
	return 0;
}
