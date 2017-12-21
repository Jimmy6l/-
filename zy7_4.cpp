#include<iostream.h>
void main()
{
	int a[10],i,j;
    cout<<" 反序存放的数组: "<<endl;
	for(i=0;i<10;i++)
		cin>>a[i];
	int*p,*q;
	p=a;
	q=&a[9];
	int t;
	while(p<q)
	{
	    t=*p;
	    *p=*q;
	    *q=t;
		p++;
		q--;
	}
    for(i=0;i<10;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}
