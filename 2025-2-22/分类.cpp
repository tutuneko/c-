#include <iostream>
using namespace std;
class test
{
public:
	test()
	{
		cout << "����һ���޲ι��캯��" << endl;
	}
	test(int a)
	{
		age = a;
		cout << "����һ���вι��캯��" << endl;
	}
	~test()
	{
		cout << "����һ����������" << endl;
	}
	test(const test& a)
	{
		age = a.age;
		cout << "����һ���������캯��" << endl;
	}
	int age;
	
};
void test01() {
	/*test test_1;
	test test_2(10);
	test test_3(test_2);

	cout <<"test_2:" << test_2.age << endl;
	cout << "test_3:" << test_3.age << endl;*/
	/*test t_1;
	test t_2 = test(5);
	test t_3 = t_2;

	cout << "test_2:" << t_2.age << endl;
	cout << "test_3:" << t_3.age << endl;*/
	/*test(11);
	cout << "�����~" << endl;
	
	cout << "-------------�ָ���--------------" << endl;

	test t(11);
	cout << "�����~" << endl;*/
	test t1;
	test t2 = 10;
	test t3 = t2;
	cout << "t2:" << t2.age << endl;
	cout << "t3:" << t3.age << endl;

}
int main() {
	test01();
	cin.get();
	return 0;
}