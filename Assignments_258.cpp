/*# include <iostream>
# include <cstring>
# include <algorithm>
using namespace std;

# define ll long long
# define rep(i,n) for(int (i)=0;i<(n);i++)

int N;
ll dp[(1 << 20)];
int topic[20][20];

int main()
{
	ios::sync_with_stdio(0);
	int test;
	cin >> test;
	while (test--)
	{
		cin >> N;
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				cin >> topic[i][j];
		fill(dp, dp + (1 << N) + 1, 0);
		dp[0] = 1;
		int maxi = (1 << N);
		for(int mask = 0; mask < maxi; mask++)
		{
			int n = __builtin_popcount(mask);
			for (int i = 0; i < N; i++)
				if (topic[n][i] == 1 && (mask & (1 << i)) == 0)
					dp[mask | (1 << i)] += dp[mask];
		}
		cout << dp[maxi - 1] <<endl;
	}
	return 0;
}*/