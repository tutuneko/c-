#include <iostream>
//by T*N 2025年1月5日 13:09:56
int main(){
    using namespace std;
    typedef char name;
    typedef int age;
    typedef long long int namber;

    name MYname[] = "津恒子";
    age MYage = 14;
    namber MYnamber = 1145141919810;

    cout<<"私の名前は"<<MYname<<"です。"<<endl;
    cout<<"私は"<<MYage<<"歳です。"<<endl;
    cout<<"私のナンバーは"<<MYnamber<<"です。"<<endl;

    system("pause");
    return 0;
}
/*
界面————————————————————
私の名前は津恒子です。
私は14歳です。
私のナンバーは1145141919810です。
Press any key to continue . . . 
总结————————————————————
1.typedef可以用来给类型取别名，可以方便地使用类型，提高代码的可读性和可维护性。
2.[] 在数组声明中用于表示数组，并且可以自动推导数组大小。name MYname[] = "津恒子"; 
    表示 MYname 是一个字符数组，编译器会自动推导其大小为 4（3 个字符 + 1 个空字符 \0）。
*/