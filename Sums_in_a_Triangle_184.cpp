#include<iostream>
#include<algorithm>
using namespace std;
int main184()
{
	int t, n, m = 0;
	int arr[101][101];
	for (int i = 0; i < 101; i++)
		for (int j = 0; j < 101; j++)
			arr[i][j] = 0;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				cin >> arr[i][j];
			}
		}
		for (int i = n - 2; i >= 0; i--)
		{
			for (int j = i; j >= 0; j--)
			{
				arr[i][j] += max(arr[i + 1][j], arr[i + 1][j + 1]);
			}
		}
		for (int i = 0; i < n; i++)
			if (arr[i][i] >= m)
				m = arr[i][i];
		cout << m << endl;
	}
	return 0;
}