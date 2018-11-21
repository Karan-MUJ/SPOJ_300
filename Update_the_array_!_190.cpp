#include<iostream>

using namespace std;

int main190()
{
	std::ios::sync_with_stdio(false);
	int t, n, u, l, r, val, q;
	cin >> t;
	while (t--)
	{
		cin >> n >> u;
		int *arr = new int[n];
		for (int i = 0; i < n; i++)
			arr[i] = 0;
		for (int j = 0; j < u; j++)
		{
			cin >> l >> r >> val;
			arr[l] += val;
			if (r < n - 1)
				arr[r + 1] -= val;
		}
		for (int i = 1; i < n; i++)
		{
			arr[i] += arr[i - 1];
		}
		cin >> q;
		while (q--)
		{
			cin >> n;
			cout << arr[n] << endl;
		}
		delete arr;
	}
	return 0;
}