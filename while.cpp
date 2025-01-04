#include <iostream>
int main ()
{using namespace std;
    int x;
    cin>>x;
    while(50 > x && x > 40)//判断输入的数字是否在40到50之间(包括40，50)
    {cout<<"不够！";
    cin>>x;
    }
   

    cout<<"你过关！";







    return 0;
}