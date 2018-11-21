/*#include<iostream>
#include<algorithm>
#define ll long long
#define inf 99999999999999
#define nm 10009

using namespace std;

struct job 
{
	ll start, end, profit;
}arr[nm];

bool cmp(job a, job b)
{
	return a.end < b.end;
}

int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i].start >> arr[i].end >> arr[i].profit;
			arr[i].end += arr[i].start;
		}
		sort(arr, arr + n, cmp);
		ll *dp = new ll[n];
		for (int i = 0; i < n; i++)
		{
			dp[i] = arr[i].profit;
		}
		for (int i = 1; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (arr[j].end < arr[i].start)
					dp[i] = max(dp[i], arr[i].profit + dp[j]);
				else 
					break;
			}
		}
		int mx = -inf;
		for (int i = 0; i < n; i++)
		{
			if (dp[i] > mx)
				mx = dp[i];
		}
		cout << mx << endl;
		delete dp;
	}
}*/