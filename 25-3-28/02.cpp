#include <iostream>
#include <cctype>
using namespace std;

const int ar_size = 10;

void full_ar(double ar[]);
int main()
{
    //�洢
    double ar[ar_size] = { 0 };
    full_ar(ar);
    cout << "--------------------------------------" << endl;
    int times = 0;
    //����
    /*for (int i = 0;i < ar_size;i++)
    {
        
        cout <<"property #" <<times++ << ":\t" << ar[i] << endl;
    }*/
    cin.get();
    return 0;
}
//�������
void  full_ar(double ar[])
{
    int start = 0;
    double i_num;
    int times = 0;
    int sum = 0;
    double average = 0;
    int over = 0;
    //�������,ѭ�����Ԫ�ظ�����doubleֵ
    while ((start < ar_size))
    {
        cout << "Enter value #" << ++times << ": \t";
        if (!(cin >> i_num))
        {
            cout << "�ܺ�Ϊ: \t" << sum << endl;
            cout << "ƽ��ֵΪ: \t" <<average<< endl;
            cout << "��" << over << "������ƽ��ֵ" << endl;
            break;
        }
        //���
        sum += i_num;
       ar[start] = i_num;
       start++;
       average = sum / start;//����ƽ��ֵ
       for (int i = 0;i < ar_size;i++)
       {
           if (ar[i] > average)
               over++;
       }
    }
}