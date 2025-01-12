#include <iostream>
//by T*N 2025年1月11日 19:40:02 
int main(){
    using namespace std;

    const int a = 10,b = 5,c = 0,d = 3;
    
    cout<<"a+b="<<a+b<<endl;
    cout<<"a-b="<<a-b<<endl;
    cout<<"a*b="<<a*b<<endl;
    cout<<"a/b="<<a/b<<endl;
    /*cout<<a/c<<endl;
    错误的原因是c为0，所以会导致程序崩溃
    我试图以此来推翻数学*/
    cout<<"a%d="<<a%d<<" (取余)"<<endl;

    system("pause");

    return 0;
}
/*
界面————————————————————
15
5
50
2
1
Press any key to continue . . .
功能————————————————————
1. 输出a+b、a-b、a*b、a/b、a%d的值。
总结————————————————————
1.除数不能为0，否则程序会崩溃。
*/