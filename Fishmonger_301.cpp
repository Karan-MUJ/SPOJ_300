/*#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int toll[55][55];
int timee[55][55];
float dp[55][1005];

int main()
{
	int n, t;
	while (true)
	{
		cin >> n >> t;
		if (n == 0 && t == 0)
			break;
		for (int i = 0; i < 55; i++)
		{
			memset(toll, 0, sizeof(toll));
			memset(timee, 0, sizeof(timee));
		}
		for (int i = 1; i < n + 1; i++)
		{
			for (int j = 1; j < n + 1; j++)
			{
				cin >> timee[i][j];
			}
		}
		for (int i = 1; i < n + 1; i++)
		{
			for (int j = 1; j < n + 1; j++)
			{
				cin >> toll[i][j];
			}
		}
		for (int i = 0; i < 55; i++)
		{
			for (int j = 0; j < 1005; j++)
			{
				dp[i][j] = 99999999;
			}
		}
		for (int ti = 0; ti < t + 1; ti++)
		{
			dp[1][ti] = 0;
		}
		for (int tim = 0; tim < t + 1; tim++)
		{
			for (int cit = 1; cit < n + 1; cit++)
			{
				for (int mid = 1; mid < n + 1; mid++)
				{
					if (mid == cit) 
						continue;
					if (timee[mid][cit] > tim) 
						continue;
					dp[cit][tim] = min(dp[cit][tim], toll[mid][cit] + dp[mid][tim - timee[mid][cit]]);
				}
			}
		}
		if (dp[n][t] == 99999999) 
			cout << -1 << endl;
		else
		{
			int travel = 0;
			for (int tim = 0; tim < t + 1; tim++)
			{
				if (dp[n][tim] == dp[n][t])
				{
					travel = tim;
					break;
				}
			}
			cout << dp[n][t] << " " << travel << endl;
		}
	}
	return 0;
}*/