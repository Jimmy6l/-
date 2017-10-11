#include "iostream.h"
void main()
{
	int i,x;
    cout << "1~99之间的同构数为:"<<endl;
    for (i = 1; i < 100; i++)
	{
	    x=i*i;
		if (i<10 && i==x%10)
		{
			cout<<i<< "同构数" << x << endl;
		}
        else if(i>=10 && i==x%100 ) 
            cout<< i << "同构数" << x << endl;
    }
}

