#include<iostream>
using namespace std;
class box
{
public:
	//��
	int x;
	//��
	int y;
	//��
	int z;
	//��ĳ�Ա����
	int get() {
		return x * y * z;
	}
	void swap(box*x, box* y, box* z);
};
void box::swap(box* x, box* y, box* z) {
	int temp;
	temp = *x;
	*x = *z;
	*z = temp;

}
int main() {
	box box01;
	box01.x = 10;
	box01.y = 11;
	box01.z = 12;
	int all =box01.get();
	cout << all << endl;
	box01.swap(box01);
	system("pause");
	return 0;
}