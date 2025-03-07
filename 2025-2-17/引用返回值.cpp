#include <iostream>
using namespace std;

int &test()
{
	int a = 10;
	return a;
}
int& test02()
{
	static int a = 10;
	return a;
}
int main() {
	int &re = test();
	cout << &re << endl;
	cout << &re << endl;
	int& re2 = test02();
	cout << &re2 << endl;
	cout << &re2 << endl;
	cin.get();
	return 0;
}