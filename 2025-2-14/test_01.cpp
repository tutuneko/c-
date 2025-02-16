#include <iostream>
int main(){
std::cout<<"请输入你的体重（单位：m）：_____"<<"\b\b\b\b\b";

double Weight;
std::cin>>Weight;
//转换英尺
double Foot_Weight;
Foot_Weight=Weight*3.2808;
//转换英寸
double Inch_Weight = Weight * 39.37;
std::cout<<"你的体重是："<<Foot_Weight<<" 英尺"<<std::endl;
std::cout<<"你的体重是："<<Inch_Weight<<" 英寸"<<std::endl;
std::cin.get();
return 0;
}
