#include <iostream>
#include <cctype>
using namespace std;

const int ar_size = 10;

void full_ar(double ar[]);
int main()
{
    //存储
    double ar[ar_size] = { 0 };
    full_ar(ar);
    cout << "--------------------------------------" << endl;
    int times = 0;
    //遍历
    /*for (int i = 0;i < ar_size;i++)
    {
        
        cout <<"property #" <<times++ << ":\t" << ar[i] << endl;
    }*/
    cin.get();
    return 0;
}
//填充数组
void  full_ar(double ar[])
{
    int start = 0;
    double i_num;
    int times = 0;
    int sum = 0;
    double average = 0;
    int over = 0;
    //填充数组,循环填充元素个数个double值
    while ((start < ar_size))
    {
        cout << "Enter value #" << ++times << ": \t";
        if (!(cin >> i_num))
        {
            cout << "总和为: \t" << sum << endl;
            cout << "平均值为: \t" <<average<< endl;
            cout << "有" << over << "个超过平均值" << endl;
            break;
        }
        //填充
        sum += i_num;
       ar[start] = i_num;
       start++;
       average = sum / start;//计算平均值
       for (int i = 0;i < ar_size;i++)
       {
           if (ar[i] > average)
               over++;
       }
    }
}