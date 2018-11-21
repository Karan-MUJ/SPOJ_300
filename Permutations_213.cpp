#include<iostream>

using namespace std;

int permut[13][100];

int main213()
{
	int t, n, k;
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			permut[i][j] = 0;
		}
	}
	permut[1][0] = 1;
	for (int i = 1; i < 12; i++)
	{
		for (int j = 0; permut[i][j]; j++)
		{
			int val = permut[i][j];
			for (int k = j, cnt = 0; cnt < i + 1; k++, cnt++)
				permut[i + 1][k] += val;
		}
	}
	cin >> t;
	while (t--)
	{
		cin >> n >> k;		
		cout << permut[n][k] << endl;
	}
	return 0;
}