#include<iostream>
using namespace std;
int main(){
char a[15];
char b;
cin.get(a,15);
cout<<"get会保留\\ n,所以，接下来的输入会直接爆炸！！"<<endl;
cin>>b;
cout<<b<<endl;


return 0;
}
