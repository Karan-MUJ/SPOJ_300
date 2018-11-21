#include<iostream>
#include<string>
#include<cstring>
#include<math.h>

using namespace std;

int main220()
{
	int t;
	long long last[2600];	
	cin >> t;
	string s;
	while (t--)
	{
		memset(last, -1, sizeof(last));
		for (int i = 0; i < 26; i++)
		{
			last[i] = -1;
		}
		cin >> s;
		int n = s.length();
		long long *dp = new long long[n + 1];		
		for (int i = 0; i < sizeof(dp); i++)
		{
			dp[i] = 0;
		}
		dp[0] = 1;
		for (int i = 1; i <= n; i++)
		{
			dp[i] = (dp[i - 1] * 2);
			if (last[s[i - 1]] != -1)
			{
				dp[i] = (dp[i] - dp[last[s[i - 1]]]);
			}
			last[s[i - 1]] = i - 1;			
		}
		cout << dp[n] << endl;
		delete dp;
	}
	return 0;
}