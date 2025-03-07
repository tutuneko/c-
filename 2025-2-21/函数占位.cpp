#include<iostream>
using namespace std;
void func(int a, int)
{
	cout << "This is a func" << endl;
}
int main() {
	func(10, 20);
	cin.get();
	return 0;
}