#include <iostream>
//by T*N 2025年1月1日 18:44:51
int main()
{
    using namespace std;//useing 应为 using
    int neko;//neko 未声明

    neko = 11;//赋值11到neko

    cout<<"那有" << neko <<" 只猫\n";
    cout<<"哇!哇!\n";

    neko = neko -10;//更改 neko 值为 初始值减去 10

    cout<<"现在那里有 "<< neko<<" 只猫\n";
    cout<<"那里并不是什么都没有\n";
    cout<<"为什么???\n";
    cout<<"Because The remaining cat was scared to death.\n";//修正了分号，使用英文字符

    system("pause");
    return 0;//修正了 "reture" 为 "return"
}
/*
输出界面——————————————————
那有 11 只猫
哇!哇!
现在那里有 1 只猫
那里并不是什么都没有
为什么???
Because The remaining cat was scared to death.
作用——————————————————————
1.定义 neko 数据类型为 int。
2.初始化 neko 值为 11。
3.输出 "There have 11 nekos"。
4.输出 "woow!woow!"。
5.更改 neko 值为 初始值减去 10。
6.输出 "There have 1 neko"。
7.输出 "There don't have nothing"。
8.输出 "WHY???"。
9.输出 "Because The remaining cat was scared to death."。
总结———————————————————————
cout 不单单输出信息，还可以进行变量的赋值、运算、条件判断等操作。

错误———————————————————————
1.useing 应为 using：这是拼写错误。
2.neko 变量未声明：在使用变量之前，必须先声明它的类型，例如 int neko = 11;。
3.输出语句中的空格和换行：增加空格和换行符，让输出的结果更整齐易读。
4.； 应为 ;：使用了中文分号，需改为英文分号。
5.reture 应为 return：拼写错误。
*/