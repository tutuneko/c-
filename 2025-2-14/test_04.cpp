#include<iostream>
using namespace std;
int main(){
    long long num;
cout<<"输入秒："<<endl;
cin>>num;
    //天数计算
    int days = (num)/(24*3600);

    //小时计算
    int hours = (num)%(24*3600)/3600;

    //分钟计算
    int minutes = (num)%3600/60;

    //秒计算
    int second = (num)%60;
    cout<<days<<"天"<<hours<<"小时"<<minutes<<"分"<<second<<"秒"<<endl;
cin.get();
return 0;
}
