#include <iostream>
using namespace std;
//byT*N 2025��1��16�� 13:19:26
int main() {
    int floor; // �����û�������һ��¥���
    int judgement = 1;//����һ������1,
   while(judgement)
       //�ж����������1�ͼ���ִ��
       //0�ͽ���ѭ��
    {
       cout << "������¥���: " << endl;
        cin >> floor;

        switch (floor) {
        case 1:
            cout << "��������һ¥" << endl;
            break;
        case 2:
            cout << "�������˶�¥" << endl;
            break;
        case 3:
            cout << "����������¥" << endl;
            break;
        case 4:
            cout << "����������¥" << endl;
            break;
        case 5:
            cout << "����������¥" << endl;
            break;
        case 6:
            cout << "����������¥" << endl;
            break;
        default:
            cout << "û�����¥��" << endl;
            judgement--;//���ж�-1����0
            break;
        }
    }
        system("pause");
        return 0;
    }
/*
���桪��������������������������
������¥���:
1
��������һ¥
������¥���:
2
�������˶�¥
������¥���:
3
����������¥
������¥���:
4
����������¥
������¥���:
5
����������¥
������¥���:
6
����������¥
������¥���:
7
û�����¥��
�밴���������. . .
�ܽᡪ��������������������������
1.ǰ׺��������׺�Լ��ȵȣ��ǵ�����䣬Ҫ�� ;
2.��case����base,�������Ҫ�� : ������ ;
*/