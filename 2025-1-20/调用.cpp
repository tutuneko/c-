#include"00.h"
//2025年1月20日 11:14:37

int main(){
	int a = 10;
	int b = 55;
	cout << "a的值为" << a << "\t" << "b的值为" << b << endl;
	//调用了test4函数
	test4(a, b);
	cout << "a的值为" << a << "\t" << "b的值为" << b << endl;

	system("pause");
	return 0;
}
/*
界面——————————————
a的值为10       b的值为55
a的值为55       b的值为10
请按任意键继续. . .
功能——————————————
利用test4函数实现互换
总结——————————————
1.头文件声明要在main函数前
*/