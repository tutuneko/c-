/*编写一个程序,读取键盘输入,直到遇到@为止,并回显输入(数字除外),
同时将大写字母转换为小写字母,小写字母转换为大写字母*/
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    //存储
    char data;
    int alpha_lower = 0;
    int alpha_upper = 0;
    int digit = 0;
    //提示
    cout << "请输入字符串:" << endl;
    //读取+转换
    while (cin.get(data), data != '@')
    {
        //判断
        if (islower(data)) //小写字母判断
        {
            cout << (char)toupper(data);
            alpha_lower++;
        }
        else if (isupper(data)) //大写字母判断
        {
            cout << (char)tolower(data);
            alpha_upper++;
        }
        else if (isdigit(data)) //数字判断
        {
            digit++; // 不输出数字
        }
        else //其他字符原样输出
        {
            cout << data;
        }
    }
    //统计
    cout << "\n你输入了:" << endl;
    cout << alpha_lower << "\t个小写字母" << endl;
    cout << alpha_upper << "\t个大写字母" << endl;
    cout << digit << "\t个数字" << endl;

    system("pause");
    return 0;
}


