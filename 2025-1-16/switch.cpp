#include <iostream>
using namespace std;
//byT*N 2025年1月16日 13:19:26
int main() {
    int floor; // 假设用户会输入一个楼层号
    int judgement = 1;//定义一个变量1,
   while(judgement)
       //判断这个变量，1就继续执行
       //0就结束循环
    {
       cout << "请输入楼层号: " << endl;
        cin >> floor;

        switch (floor) {
        case 1:
            cout << "你来到了一楼" << endl;
            break;
        case 2:
            cout << "你来到了二楼" << endl;
            break;
        case 3:
            cout << "你来到了三楼" << endl;
            break;
        case 4:
            cout << "你来到了四楼" << endl;
            break;
        case 5:
            cout << "你来到了五楼" << endl;
            break;
        case 6:
            cout << "你来到了六楼" << endl;
            break;
        default:
            cout << "没有这个楼层" << endl;
            judgement--;//将判断-1，成0
            break;
        }
    }
        system("pause");
        return 0;
    }
/*
界面——————————————
请输入楼层号:
1
你来到了一楼
请输入楼层号:
2
你来到了二楼
请输入楼层号:
3
你来到了三楼
请输入楼层号:
4
你来到了四楼
请输入楼层号:
5
你来到了五楼
请输入楼层号:
6
你来到了六楼
请输入楼层号:
7
没有这个楼层
请按任意键继续. . .
总结——————————————
1.前缀自增，后缀自减等等，是单独语句，要加 ;
2.是case不是base,并且其后要加 : 而不是 ;
*/