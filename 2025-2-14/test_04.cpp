#include<iostream>
using namespace std;
int main(){
    long long num;
cout<<"�����룺"<<endl;
cin>>num;
    //��������
    int days = (num)/(24*3600);

    //Сʱ����
    int hours = (num)%(24*3600)/3600;

    //���Ӽ���
    int minutes = (num)%3600/60;

    //�����
    int second = (num)%60;
    cout<<days<<"��"<<hours<<"Сʱ"<<minutes<<"��"<<second<<"��"<<endl;
cin.get();
return 0;
}
