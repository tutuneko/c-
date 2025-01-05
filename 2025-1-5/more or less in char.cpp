#include <iostream>
//by T*N 2025年1月5日 10:11:06
int main (){
    using namespace std;
    char a = 'a',b = 'b';
    cout<<"a + b ="<<(int)(a + b)<<endl;
    cout<<"a - b ="<<(int)(a - b)<<endl;
    cout<<"a * b ="<<(int)(a * b)<<endl;
    cout<<"a / b ="<<(int)(a / b)<<endl;
    cout<<"a < b "<<(a < b?"turn":"false")<<endl;//?:操作符在a<b时返回true，否则返回false
    cout<<"a > b "<<(a > b?"turn":"false")<<endl;//?:操作符在a>b时返回true，否则返回false

    return 0;
}
/*
输出界面————————————————————
a + b =195
a - b =-1
a * b =9506
a / b =0
a < b turn
a > b false
功能————————————————————————
1. 输出a+b、a-b、a*b、a/b的结果。
2. 输出a<b和a>b的结果。
总结————————————————————————
1.字符也能比较大小，但比较的是ASCII码值。
2.?:操作符可以用来简化条件判断语句。

*/