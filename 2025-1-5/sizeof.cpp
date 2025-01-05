#include <iostream>
//by T*N 2025年1月5日 10:14:20
int main (){
using namespace std;

int a = -2147483649,b=2147483648;//运用下溢(underflow)和上溢(overflow)的概念来表示范围
long int g = -2147483649,h=2147483648;
short int c = -32769,d=32768;


cout<<"int "<<sizeof(int)<<" 字节"<<endl;
cout<<"long int "<<sizeof(long int)<< " 字节"<<endl;
cout<<"short int "<<sizeof(short int)<< " 字节"<<endl;
cout<<"char "<<sizeof(char)<< " 字节"<<endl;
cout<<"float "<<sizeof(float)<< " 字节"<<endl;
cout<<"double "<<sizeof(double)<< " 字节"<<endl;
cout<<"long double "<<sizeof(long double)<< " 字节"<<endl;
cout<<"________________________________________________________________\n";

cout << "int 范围："<< b << "~" << a << endl;//b上溢出了，所以显示最小值，a下溢出了，所以显示最大值
cout<<"long int 范围："<< h <<"~"<< g <<endl;
cout<<"short int 范围："<< d <<"~"<< c <<endl;

system("pause");
    return 0;
}
/*
输出界面————————————————————
int 4 字节
long int 4 字节
short int 2 字节
char 1 字节
float 4 字节
double 8 字节
long double 16 字节
________________________________________________________________
int 范围：-2147483648~2147483647
long int 范围：-2147483648~2147483647
short int 范围：-32768~32767
Press any key to continue . . . 
功能————————————————————————
1. 显示不同数据类型占用内存大小
2. 显示不同数据类型范围
总结————————————————————————
1. sizeof()函数可以用来显示不同数据类型占用内存大小。
2.上溢出后，显示最小值，下溢出后，显示最大值。
*/