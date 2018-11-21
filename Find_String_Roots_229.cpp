#include<iostream>
#include<string>
#include<cstring>
#define sz 100000

using namespace std;
int strr[sz];

void findroot(string s, int n)
{
	int i = 1, j = 0;
	strr[0] = 0;
	while (i < n)
	{
		if (s[j] == s[i])
		{
			strr[i] = j + 1;
			i++;
			j++;
		}
		else if (j == 0)
		{
			i++;
		}
		else
		{
			j = strr[j - 1];
		}
	}
}

int main229()
{
	string s;
	while (true)
	{
		memset(strr, 0, sizeof(strr));
		cin >> s;
		if (s[0] == '*')
			return 0;
		findroot(s, s.size());
		int L = s.size();
		int sol = L - strr[L - 1], ans = 1;
		if (sol < L && L % sol == 0) 
			ans = L / sol;
		cout << ans << endl;
	}
	return 0;
}