#include <iostream>
using namespace std;
class person
{
public:
	string name;
	int age;
	

};
person operator+ (person& p1, person& p2)
{

	person temp;
	temp.age = p1.age + p2.age;
	temp.name = p1.name + p2.name;
	return temp;
}

int main()
{
	person p1 = { "A",13 };
	person p2 = { "B",17 };

	cout << p1.name << "\t" << p1.age << endl;
	cout << p2.name << "\t" << p2.age << endl;

	person p3 = p1 + p1;
	cout << p3.name << p3.age << endl;


	cin.get();
	return 0;
}