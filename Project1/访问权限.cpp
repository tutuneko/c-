#include <iostream>
#include <string>
using namespace std;
//����Ȩ�� public    �����Է���
//����Ȩ�� protected ���ڿ��Է��ʣ����ⲻ�С��Ӽ��̳и���
//˽��Ȩ�� private   ���ڿ��Է��ʣ����ⲻ�С��Ӽ����̳и���
class stu
{
public:
	string name;
protected:
	string genter;
private:
	int num;

};
int main() { 
	stu stu_01;
	stu_01.name = "����";
	//stu_01.genter = "��";
	//stu_01.num = 114514;
	cin.get();
	return 0;
}