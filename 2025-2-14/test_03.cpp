#include<iostream>
using namespace std;
int main(){
double DU ,FEN , MIAO;
cout<<"请输入度："<<endl;
cin>>DU;
cout<<"请输入分："<<endl;
cin>>FEN;
cout<<"请输入秒："<<endl;
cin>>MIAO;
double ALL = DU+FEN/60+MIAO/60/60;
cout<<"经纬度为："<<ALL<<endl;

cin.get();
return 0;
}
