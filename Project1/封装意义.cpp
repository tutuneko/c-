#include <iostream>
using namespace std;
const double PI = 3.14;
class yuan
{
public:
	double r;
	double r_ZC()
	{
		return 2 * PI * r;
	}
};
int main() {
	yuan yuan_1 = { 1 };
	cout << yuan_1.r_ZC() << endl;
	cin.get();
	return 0;
}