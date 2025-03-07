#include <iostream>
using namespace std;
int* func() 
{
	int i = 10;
	return &i;
}
int main() {
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;


	cin.get();
	return 0;
}