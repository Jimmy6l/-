#include <iostream.h>
void main()
{
  int a,i;
  cout<<"输入一个正整数:"<<endl;
  cin>>a;
  i=0;
  while(a!=1)
{
	if(a%2==0)
	{
	   a=a/2;
	   i=i++;
	   }
    else
	{
	   a=3*a+1;
       i=i++;  
		}}
  cout<<"该数的角谷猜想步骤数值为："<<i-1<<endl;
}