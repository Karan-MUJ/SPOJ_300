/*#include<iostream>
#include<algorithm>

const int max = 2000000;

using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--)
	{
		int k, n;
		cin >> k >> n;
		int val[50];
		int wt[50];
		for (int i = 0; i < n; i++)
		{
			cin >> wt[i] >> val[i];
		}
		int arr[51][1001];
		for (int i = 0; i < 51; i++)
		{
			for (int j = 0; j < 1001; j++)
			{
				arr[i][j] = 0;
			}
		}
		for (int i = 0; i <= k; i++)
		{
			if (i >= wt[0])
			{
				arr[0][i] = val[0];
			}
			else
			{
				arr[0][i] = 0;
			}
		}
		for (int i = 1; i < n; i++)
		{
			for (int j = 1; j <= k; j++)
			{
				if (wt[i] > j)
				{
					arr[i][j] = arr[i - 1][j];
				}
				else
				{
					arr[i][j] = max(arr[i - 1][j], val[i] + arr[i - 1][j - wt[i]]);
				}
			}
		}
		cout << "Hey stupid robber, you can get" << ' ' << arr[n - 1][k] << '.' << endl;
	}
	return 0;
}*/