/*#include<iostream>
#include<math.h>

using namespace std;

long long dp[11];

void mkdp()
{
	dp[0] = 0;
	dp[1] = 45;
	for (int i = 2; i < 11; i++)
	{
		dp[i] = dp[i - 1] * 10 + 45 * ceil(pow(10, i - 1));
	}
}

long long digit(int n)
{
	if (n < 10)
	{
		int s = 0;
		for (int i = 1; i <= n; i++)
		{
			s += i;
		}
		return s;
	}
	int d = log10(n);
	int msd = n, result;
	while (msd > 9)
	{
		msd /= 10;
	}
	int p = ceil(pow(10, d));
	return msd * dp[d] + (msd * (msd - 1) / 2) * p + msd * (1 + n % p) + digit(n % p);
}

int main()
{
	long long a, b;
	cin >> a >> b;
	mkdp();
	while(a != -1 && b != -1)
	{
		long long as = digit(a - 1), bs = digit(b);
		cout << bs - as << endl;
		cin >> a >> b;
	}
}*/