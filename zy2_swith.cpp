#include<iostream.h>
void main()
{
	int a;
	cout<<"输入一个整数:";
	cin>>a;
	switch(a)
	{
	case 1001:cout<<"a>1000\n";break;
	case 1000:cout<<"a=1000\n";break;
	case 999:cout<<"100<a<999\n";break;
	case 100:
	case 99:cout<<"10<a<99\n";break;
	case 10:
	default:cout<<"a<10\n";
}}
