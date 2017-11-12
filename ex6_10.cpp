#include<iostream>
using namespace std;
float fun(double h){
  int a=h*1000;
  int b=h*100;     
  int c=a-10*b;   
  if(c>=5) b+=1;
  else b=b;
       double m=(double)b/100;
       return m;
 }
 int main(){
 double h;
 cout<<"输入一个小数"<<endl;
 cin>>h;
 cout<<fun(h)<<endl;
return 0;
}