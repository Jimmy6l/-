# include <iostream.h>
void main()
{
	int i, a, b;
	a= 0;
	cout<<"������һ��������"<<endl;
	cin>>i;
	if (i <= 0)
	{
		a= 1;
	}
	else
	{
		for (b=i;b>0;)
		{
			b= b/10;
			a++;
		}
	}
	switch(a)
	{	
	case 1: cout<<"����ֵС��10"<<endl;
			break;
	case 2: cout<<"����ֵ��10~99"<<endl;
			break;
	case 3: cout<<"����ֵ��100~999"<<endl;
			break;
	default: cout<<"����ֵ����1000"<<endl;
	}
}