#include <iostream.h>
float fun(int n)
{
  int i,a=0;
  float s=0.0;
  for(i=1;i<=n;i++)
  {
	  a=a+i;
	  s=s+1.0/a;
  }
  return s;
}
void main()
{
	int n;
	float s;
	cout<<"ÊäÈënÖµ:"<<endl;
	cin>>n;
	s=fun(n);
	cout<<"S=1+1/(1+2)+...+1/(1+2+3+...+n)="<<s<<endl;
}

