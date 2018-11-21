#include<iostream>
#include<algorithm>

using namespace std;

int main65()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int m = 0, n = 0, x = 0;
		cin >> m >> n;
		int arr[100][100];
		for (int i = 0; i < m; i++)
		{
			for (int j = 1; j < n + 1; j++)
			{
				cin >> x;
				arr[i][j] = x;
			}
		}
		for (int i = 0; i < m; i++)
		{
			arr[i][0] = 0;
			arr[i][n+1] = 0;
		}
		int ans = arr[0][1];
		for (int i = m - 2; i >= 0; i--)
		{
			for (int j = 1; j < n + 1; j++)
			{
				arr[i][j] += max(arr[i + 1][j - 1], max(arr[i + 1][j], arr[i + 1][j + 1]));
			}
		}
		for (int i = 0; i < n + 2; i++)
		{
			if (arr[0][i] > ans)
				ans = arr[0][i];
		}
		cout << ans << endl;
	}
	return 0;
}