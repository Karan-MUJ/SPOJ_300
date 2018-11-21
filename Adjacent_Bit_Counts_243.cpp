/*#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int t, c, n, k;
	long long dp[110][110][2];
	memset(dp, 0, sizeof(dp[0][0][0]) * 110 * 110 * 2);
	dp[1][0][0] = dp[1][0][1] = 1;
	for (int i = 2; i < 110; i++)
	{
		for (int j = 0; j < 110; j++)
		{
			dp[i][j][0] = dp[i - 1][j][0] + dp[i - 1][j][1];
			if (j>0)
				dp[i][j][1] = dp[i - 1][j - 1][1];
			dp[i][j][1] += dp[i - 1][j][0];
		}
	}
	cin >> t;
	while (t--)
	{
		cin >> c >> n >> k;
		cout << c << ' ' << dp[n][k][0] + dp[n][k][1] << endl;
	}
	return 0;
}*/