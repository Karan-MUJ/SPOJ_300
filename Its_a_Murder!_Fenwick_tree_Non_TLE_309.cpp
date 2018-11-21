/*#include<iostream>
#include<algorithm>

using namespace std;

const int mx = 100009;
int arr[mx], srt[mx];
long long BIT[mx];

void update(int idx, int val)
{
	while (idx < mx)
	{
		BIT[idx] += val;
		idx += idx & (-idx);
	}
}

long long read(int idx)
{
	long long sol = 0;
	while (idx > 0)
	{
		sol += BIT[idx];
		idx -= idx & (-idx);
	}
	return sol;
}

int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		memset(BIT, 0, sizeof(BIT));
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			srt[i] = arr[i];
		}
		sort(srt, srt + n);
		for (int i = 0; i < n; i++)
		{
			arr[i] = lower_bound(srt, srt + n, arr[i]) - srt;
		}
		long long ans = 0;
		for (int i = 0; i < n; i++)
		{
			ans += read(arr[i]);
			update(arr[i] + 1, srt[arr[i]]);
		}
		cout << ans << endl;
	}
	return 0;
}*/