/*��дһ������,��ȡ��������,ֱ������@Ϊֹ,����������(���ֳ���),
ͬʱ����д��ĸת��ΪСд��ĸ,Сд��ĸת��Ϊ��д��ĸ*/
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    //�洢
    char data;
    int alpha_lower = 0;
    int alpha_upper = 0;
    int digit = 0;
    //��ʾ
    cout << "�������ַ���:" << endl;
    //��ȡ+ת��
    while (cin.get(data), data != '@')
    {
        //�ж�
        if (islower(data)) //Сд��ĸ�ж�
        {
            cout << (char)toupper(data);
            alpha_lower++;
        }
        else if (isupper(data)) //��д��ĸ�ж�
        {
            cout << (char)tolower(data);
            alpha_upper++;
        }
        else if (isdigit(data)) //�����ж�
        {
            digit++; // ���������
        }
        else //�����ַ�ԭ�����
        {
            cout << data;
        }
    }
    //ͳ��
    cout << "\n��������:" << endl;
    cout << alpha_lower << "\t��Сд��ĸ" << endl;
    cout << alpha_upper << "\t����д��ĸ" << endl;
    cout << digit << "\t������" << endl;

    system("pause");
    return 0;
}


