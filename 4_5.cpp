#include "iostream.h"
void main()
{
	int i,x;
    cout << "1~99֮���ͬ����Ϊ:"<<endl;
    for (i = 1; i < 100; i++)
	{
	    x=i*i;
		if (i<10 && i==x%10)
		{
			cout<<i<< "ͬ����" << x << endl;
		}
        else if(i>=10 && i==x%100 ) 
            cout<< i << "ͬ����" << x << endl;
    }
}

