#include"00.h"
//2025��1��20�� 11:15:23
void test4(int& c, int& d) {
	int temp;

	temp = c;
	c = d;
	d = temp;
}
//����test4����