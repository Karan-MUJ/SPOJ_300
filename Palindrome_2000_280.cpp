/*#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>

using namespace std;

string s, r;
int dp[5010][5010] = {0}, n;

void solve()
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (r[i - 1] != s[j - 1])
			{
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
			else
			{
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin >> n >> s;
	r = s;
	reverse(r.begin(), r.end());
	solve();
	cout << n - dp[n][n] << endl;
	return 0;
}*/