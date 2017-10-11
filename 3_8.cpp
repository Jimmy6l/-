#include "iostream.h"
void main()
{
  int a,b;
  cout<<"ÊäÈëÕûÊýa,b:"<<endl;
  cin>>a>>b;
  if(a%b==0)
	  cout<<"a/b="<<a/b<<endl;
  else
	  cout<<"a/b="<<int(a/b)<<endl<<"a%b="<<a%b<<endl;
}
