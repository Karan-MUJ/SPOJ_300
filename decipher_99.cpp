#include<iostream>
#include<string>
#include<cstdio>
#include<map>
#include<algorithm>
#include<cmath>
#include<vector>
#include<sstream>
#include<stack>
#include<queue>
#include<cstring>

#define pb push_back
#define LL long long
#define OUTPUT_TO_FILE 1
#define s(n)					scanf_s("%d",&n)
#define sl(n) 					scanf_s("%lld",&n)
#define sf(n) 					scanf_s("%lf",&n)
#define ss(n) 					scanf_s("%s",n)


using namespace std;

int main99()
{
	LL a,b,c;
	int t;
	cin>>t;
	while(t>0){
		sl(a);sl(b);sl(c);
		LL ans = a*a - 2*b;
		cout<<ans<<endl;
		t--;
	}
	return 0;
}