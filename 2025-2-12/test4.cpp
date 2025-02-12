#include<iostream>
using namespace std;
void month(int age){
    cout<<"Your age in months is:"<<age*12;
}
int main(){
cout<<"Enter your age:";
int age;
cin>>age;

month(age);
cin.get();
cin.get();
return 0;
}
