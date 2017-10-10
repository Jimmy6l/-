#include<iostream.h>
#include<iomanip.h>
void main()
{
  int k;
  float r,l,s,pi;
  cin>>r>>k;
  pi=3.14159;
  switch(k)
  {
  case 1:s=pi*r*r;
  cout<<"s="<<s<<endl;break;
  case 2:l=2*pi*r;
  cout<<"l="<<l<<endl;break;
  case 3:l=2*pi*r;s=pi*r*r;
  cout<<"l="<<l<<endl;
  cout<<"s="<<s<<endl;break;
  }
}