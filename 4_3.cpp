#include <iostream.h>
void main()
{
  int a,i;
  cout<<"����һ��������:"<<endl;
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
  cout<<"�����ĽǹȲ��벽����ֵΪ��"<<i-1<<endl;
}