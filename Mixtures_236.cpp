#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

long long mix[109], mixdp[109][109];

long long sum(int i, int j)
{
	int ans = 0;
	for (int x = i; x <= j; x++)
	{
		ans += mix[x];
		ans %= 100;
	}
	return ans;
}

long long mixtures(int i, int j)
{
	if (i >= j)
		return 0;
	if (mixdp[i][j] != -1)
		return mixdp[i][j];
	mixdp[i][j] = 99999999999999;
	for (int k = i; k <= j; k++)
	{
		mixdp[i][j] = min(mixdp[i][j], mixtures(i, k) + mixtures(k + 1, j) + sum(i, k) * sum(k + 1, j));
	}
	return mixdp[i][j];
}

int main236()
{
	int n;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> mix[i];
		}
		memset(mixdp, -1, sizeof(mixdp));
		cout << mixtures(0, n - 1) << endl;
	}
	return 0;
}