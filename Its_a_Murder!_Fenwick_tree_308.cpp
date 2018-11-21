// This program works just fine but it'll result in TLE
/*#include<iostream>
#include<cstring>
#define MAX 1000009

using namespace std;

long long BIT[MAX];

long long read(long long idx)
{
	long long sol = 0;
	while (idx > 0)
	{
		sol += BIT[idx];
		idx -= idx & (-idx);
	}
	return sol;
}

void update(long long idx, long long val)
{
	while (idx < MAX)
	{
		BIT[idx] += val;
		idx += idx & (-idx);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	long long t, n, x, ans = 0;
	cin >> t;
	while (t--)
	{
		memset(BIT, 0, sizeof(BIT));
		ans = 0;
		cin >> n;
		for (long long i = 0; i < n; i++)
		{
			cin >> x;
			ans += read(x - 1);
			update(x, x);
		}
		cout << ans << endl;
	}
	return 0;
}*/