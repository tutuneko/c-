#include <iostream>
using namespace std;
//ֵ����
void swap01(int a,int b) {
	
	swap(a, b);
}
//��ַ����
void swap02(int* a, int* b) {
	swap(*a, *b);
}
//���ô���
void swap03(int& a, int& b) {
	swap(a, b);
}
int main() {
	int a = 12;
	int b = 20;
	swap01(a, b);
	cout << a << b << endl;

	swap02(&a,& b);
	cout << a << b << endl;

	swap(a, b);

	swap03(a, b);
	cout << a << b << endl;
	cin.get();
	return 0;

}