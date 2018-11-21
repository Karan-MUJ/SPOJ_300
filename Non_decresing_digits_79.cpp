/*#include<iostream>

using namespace std;

long long arrndd[65][11];

void ndd()
{
	long long sum = 0;
	for (int i = 0; i < 10; i++)
	{
		arrndd[0][i] = 0;
		arrndd[1][i] = 1;
	}
	arrndd[0][10] = 0;
	arrndd[1][10] = 10;
	for (int i = 2; i < 65; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				arrndd[i][j] = arrndd[i - 1][10];
				sum += arrndd[i][j];
			}
			else
			{
				arrndd[i][j] = arrndd[i][j - 1] - arrndd[i - 1][j - 1];
				sum += arrndd[i][j];
			}
		}
		arrndd[i][10] = sum;
		sum = 0;
	}
}

int main79()
{
	ndd();
	long long t, c, n;
	cin >> t;
	while (t--)
	{
		cin >> c >> n;
		cout << c << ' ' << arrndd[n][10] << endl;
	}
	return 0;
}*/