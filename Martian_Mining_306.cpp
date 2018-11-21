/*#include<iostream>
#include<algorithm>
#include<cstring>
const int mx = 505;

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int n, m;
	cin >> n >> m;
	while (n && m)
	{
		int yeye[mx][mx], blog[mx][mx];
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				cin >> yeye[i][j];
			}
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				cin >> blog[i][j];
			}
		}		
		int dp[mx][mx] = { 0 }, cyeye[mx][mx] = { 0 }, cblog[mx][mx] = { 0 };
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				cyeye[i][j] = cyeye[i][j - 1] + yeye[i][j];
				cblog[i][j] = cblog[i - 1][j] + blog[i][j];
				dp[i][j] = max(dp[i][j - 1] + cblog[i][j], dp[i - 1][j] + cyeye[i][j]);
			}
		}
		cout << dp[n][m] << endl;
		cin >> n >> m;
	}
	return 0;
}*/