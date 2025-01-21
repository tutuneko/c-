#include<iostream>
using namespace std;

void swap2(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int a = 11;
	int b = 79;
	
	swap(a, b);//值传递，
	cout <<"值传递：\t" << a <<"\t" << b << endl;
	swap(&a, &b);//地址传递
	cout << "地址传递：\t" << a << "\t" << b << endl;
	

	system("pause");
	return 0;
}