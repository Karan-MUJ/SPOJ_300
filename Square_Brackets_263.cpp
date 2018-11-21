/*#include<iostream>

using namespace std;

#define MX 50
#define ll long long int

int a[MX];
int mm[MX][MX];
int main()
{
	int t, n, i, j, k, s;
	cin >> t;
	while (t--)
	{
		for (int i = 0; i < MX; i++)
			a[i] = 0;
		for (int i = 0; i < MX; i++)
			for (j = 0; j < MX; j++)
				mm[i][j] = 0;
		cin >> n >> k;
		for (int i = 0; i < k; i++)
		{
			cin >> s;
			a[s] = 1;
		}
		mm[1][0] = 0;
		mm[1][1] = 1;
		for (int i = 2; i <= 2 * n; i++)
		{
			if (a[i])
			{
				mm[i][0] = 0;
				for (j = 1; j <= i + 1; j++)
				{
					mm[i][j] = mm[i - 1][j - 1];
				}
			}
			else
			{
				for (j = 1; j <= i + 1; j++)
				{
					mm[i][j] += mm[i - 1][j - 1];
				}
				for (j = 0; j <= i - 1; j++)
				{
					mm[i][j] += mm[i - 1][j + 1];
				}
			}
		}
		cout << mm[2 * n][0] << endl;
	}
	return 0;
}*/