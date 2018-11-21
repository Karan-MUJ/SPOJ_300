#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main71(){
	int t = 0;
	cin >> t;
	while (t--) 
	{
		string s,s1;		
		cin >>s1>>s;		
		int b1 = (s1[s1.size()-1]-'0'), result=0, n=s.size(), b=0;
		if (n==1 && s[0]-'0'==0)
		{
			cout<<"1"<<endl;
			continue;
		}
		if (n>=2)
			b=(s[s.size()-2]-'0')*10;
		b+=(s[s.size()-1]-'0');
		if(b%4)
		{
			result=(int)pow(b1,b%4);
		}
		else
		{
			result=(int)pow(b1,4);
		}
		result=result%10;
		cout<<result<<endl;
	}
	return 0;
}