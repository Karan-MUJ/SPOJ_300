/*#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int dp[3000][3000];
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s, t;
		cin >> s >> t;
		int size1 = s.size(), size2 = t.size();
		memset(dp, 0, sizeof(dp[0][0])*(size1 + 1)*(size2 + 1));
		for (int i = 0; i <= size1; i++)
			dp[i][0] = i;
		for (int j = 0; j <= size2; j++)
			dp[0][j] = j;
		for (int i = 1; i <= size1; i++)
		{
			for (int j = 1; j <= size2; j++)
			{
				if (s[i - 1] == t[j - 1]) {
					dp[i][j] = dp[i - 1][j - 1];
				}
				else
					dp[i][j] = min(dp[i - 1][j - 1] + 1, min(dp[i - 1][j] + 1, dp[i][j - 1] + 1));
			}
		}
		printf("%d\n", dp[size1][size2]);
	}
	return 0;
}*/