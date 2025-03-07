#include <iostream>
using namespace std;
void func()
{
	cout << "func" << endl;
}
void func(int a)
{
	cout << "func(int a)" << endl;
}
void func(double a)
{
	cout << "func(double a)" << endl;
}
void func(double a,int b)
{
	cout << "func(double a,int b)" << endl;
}
void func(int a,double b)
{
	cout << "func(int a,double b)" << endl;
}
int main() {
	func();
	func(1);
	func(1.11111);
	func(1, 1.111);
	func(1.1111, 1);

	cin.get();
	return 0;
}