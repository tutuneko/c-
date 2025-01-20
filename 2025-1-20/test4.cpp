#include"00.h"
//2025年1月20日 11:15:23
void test4(int& c, int& d) {
	int temp;

	temp = c;
	c = d;
	d = temp;
}
//这是test4函数