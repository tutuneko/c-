#include <iostream>
using namespace std;
void show(const int& val) {
	cout << "val:" << val << endl;
	//val = 20;
	cout << "val:" << val << endl;
}
int main() {
	
	//const int& pr = 10;
	//pr = 20;
	// ����const֮�󣬱�Ϊֻ��״̬
	//=
	/*int temp = 10;
	int& pr = temp;*/
	int a = 10;
	show(a);
	cout << "a:" << a << endl;
	cin.get();
	return 0;
}