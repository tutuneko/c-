#include <iostream>
using namespace std;
class per
{
public:
	/*per(int a, int b, int c)
	{
		p_a = a;
		p_b = b;
		p_c = c;
	}*/
per() :p_a(1),p_b(2),p_c(3)
{

}
	int p_a;
	int p_b;
	int p_c;
};
void func() {
	/*per p1(1, 2, 3);*/
	per p1;
	cout << p1.p_a << endl;
	cout << p1.p_b << endl;
	cout << p1.p_c << endl;
}
int main() {
	func();
	cin.get();
	return 0;
}