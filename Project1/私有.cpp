#include <iostream>
using namespace std;
class per
{
public:
	void setName(string S_name)
	{
		name = S_name;
	}
	void getName() {
		cout << name << endl;
	}
	void setAge(int S_age)
	{
		if (S_age < 0 || S_age>120)
		{
			cout << "����Ӧ��0~120��" << endl;
			return;
		}
		age = S_age;
	}
	void getAge() {
		cout << age << endl;
	}
	void setFavorite(string S_favorite)
	{
		favorite = S_favorite;
	}
private:
	string name;//�ɶ���д
	
	int age = 18;//�ɶ�
	
	string favorite;//��д
	

	
};
int main() {
	per per_01;
	per_01.setName("m");
	per_01.getName();
	per_01.setAge(100);
	per_01.getAge();
	per_01.setFavorite("shit");
	cin.get();
	return 0;
}