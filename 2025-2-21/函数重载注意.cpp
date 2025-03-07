#include<iostream>
using namespace std;
void func(int& a)
{
	cout << "(int& a)" << endl;
}
void func(const int& a)
{
	cout << "(const int& a)" << endl;
}
void func2(int a , int b = 10)
{
	cout << "(int a = 10, int b)" << endl;
}
void func2(int a , double b)
{
	cout << "(int a , int b)" << endl;
}
int main() {
	
	int a_1 = 10;
	func(a_1);
	const int& a = 10;
	func(a);
	func2(10);
	func2(10,20);

	cin.get();
	return 0;
}