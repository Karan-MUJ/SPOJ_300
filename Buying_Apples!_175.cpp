/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main175()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector <int> arr;
		long long dp[103][103];
		int x;
		arr.push_back(0);
		for (int i = 1; i < k + 1; i++)
		{
			cin >> x;
			arr.push_back(x);						
		}
		for (int i = 0; i <= k; i++)
		{
			dp[0][i] = 0;
			dp[i][0] = 1000000000000;
		}
		dp[0][0] = 0;
		for (int i = 1; i <= k; i++)
		{
			for (int j = 1; j <= k; j++)
			{
				dp[i][j] = -1;
				if(arr[j] == -1 || j > i)
				{
					dp[i][j] = dp[i][j - 1];
				}
				else
				{
					if (dp[i - j][j] != 1000000000000)
					{
						dp[i][j] = min(dp[i][j - 1], dp[i - j][j] + arr[j]);
					}
				}
			}
		}
		if (dp[k][k] != -1)
			cout << dp[k][k] << endl;
		else
			cout << "-1" << endl;
	}
	return 0;
}*/