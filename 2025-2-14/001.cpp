#include<iostream>
using namespace std;
int  main(){
char o_O[10];
int len = sizeof(o_O) / sizeof(char);
cin>>o_O;
for(int i = 0 ; i < len ; i++)
{
    cout<<"µÚ"<<i + 1<<"¸ö×Ö·û"<<o_O[i]<<endl;

}
return 0;
}
