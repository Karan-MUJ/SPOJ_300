#include<iostream>
#include<math.h>

using namespace std;

int main20()//20
{	long long t=0;
	cin>>t;
	for(long long i=0;i<t;i++)
	{	long long a,b,c;
		cin>>a>>b;
		c=a%10;
		if(a==0)
		{	cout<<"0"<<endl;
			continue;	}
		if(b==0)
		{	cout<<"1"<<endl;
			continue;	}
		b=b%4;
		if(b!=0)
		{	a=pow(a,b%4);
			cout<<a%10<<endl; 	}
		if(b==0)
		{	b=4;
			a=pow(a,b);
			cout<<a%10<<endl;	}	}
	return 0;
}