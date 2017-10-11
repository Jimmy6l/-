#include "iostream.h"
#include "iomanip.h"
void main()
{
int a,leap,i=0;
cout<<"2000年到3000年所有闰年年份:"<<endl;
for(a=2000;a<=3000;a++)
{
	leap=1;
	{
    	if(a%4==0&&a%100!=0||a%400==0)
		leap=1;
	else
		leap=0;
	}
	if(leap)
	{  
		cout<<"  "<<a;
		i++;
		if(i%10==0)
		cout<<endl;
}}	
	if(i%10!=0)
	cout<<"  i="<<i<<endl;
}
