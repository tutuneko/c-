#include <iostream>
using namespace std;
class cube
{
public:
	double set(double S_chang, double S_kuan, double S_gao)
	{
		 chang = S_chang;
		 kuan = S_kuan;
		 gao = S_gao;
		return chang * kuan * gao;
	}
	double func() {
		return chang * kuan * gao;
	}
	void pand(cube cube_01,cube cube_02)
	{
		if (cube_01.chang == cube_02.chang&&cube_01.kuan == cube_02.kuan&& cube_01.gao == cube_02.gao)
		{
			cout << "这两个立方体完全相等" << endl;
		}
		else
		{
			cout << "这两个立方体不完全相等" << endl;
		}
	}
private:
	double chang;
	double kuan;
	double gao;
};
int main() {
	cube cube1;
	cube1.set(1, 2, 3);
	cout << cube1.func() << endl;
	cube cube2;
	cube2.set(1, 2, 3);
	cout << cube2.func() << endl;
	cube cube3;
	cube3.set(2, 1, 3);
	cout << cube3.func() << endl;
	cube1.pand(cube1, cube2);
	cube3.pand(cube2, cube3);
	cin.get();
	return 0;
}