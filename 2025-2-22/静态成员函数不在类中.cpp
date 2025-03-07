#include<iostream>
using namespace std;
class per
{
public:
	static int b;
};
int per::b = 1;
void func()
{
	per per1;
	cout << per1.b << endl;
}
int main() {
	func();
	cin.get();
	return 0;
}