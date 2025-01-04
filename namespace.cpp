#include <iostream>
//by tutu neko（bilibili）2025年1月1日 16:13:50
int main()
{
    using namespace std;//(有了这行代码，cout和endl就可以直接使用了,无需再加std::)
    cout << "what are you doing?";//输出到屏幕
    cout << endl;//换行
    return 0;
}
/*
输出界面———————————————————————————
what are you doing?
功能———————————————————————————————
1. 输出what are you doing?到屏幕。
2. 输出换行符。
总结————————————————————————————————
1. using namespace std;语句可以省略命名空间std，直接使用cout和endl。
2. cout和endl是标准库中的输出流和换行符。
3.刷新缓冲区，把缓冲区里的数据写入文件或屏幕用 endl（过多的 endl 是影响程序执行效率低下的因素之一。）
.考虑效率就用 '\n'。摘自 https://www.runoob.com/note/23593
*/