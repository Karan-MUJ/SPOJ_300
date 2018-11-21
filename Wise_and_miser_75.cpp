#include<iostream>

using namespace std;

int min1(int a, int b, int c)
{
	return (a < b) ? ((a < c) ? (a) : (c)) : (b < c) ? (b) : (c);
}

int main75()
{
	int m = 0, n = 0, x = 0;
	cin >> n >> m;
	int arr[102][102];
	for (int i = 0; i < n ;i++)
	{
		arr[i][0] = 1000;
		arr[i][m + 1] = 1000;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> x;
			arr[i][j] = x;
		}
	}
	for (int i = n - 2; i >= 0; i--)
	{
		for (int j = 1; j < m+1; j++)
		{
			arr[i][j] = arr[i][j] + min1(arr[i + 1][j - 1], arr[i + 1][j], arr[i + 1][j + 1]);
		}
	}
	int min = arr[0][1];
	for (int i = 1; i < m + 1; i++)
	{
		if (arr[0][i] < min)
			min = arr[0][i];
	}
	cout << min << endl;
	return 0;
}