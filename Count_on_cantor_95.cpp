/*#include<iostream>

using namespace std;

int main95()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		long long n = 0, num = 1, den = 1, maxn = 1, maxd = 2;
		cin >> n;
		long long count = 0;
		for (;;)
		{
			for (int i = 1; i <= maxn && count < n; i++)
			{
				count++;
				num = i;
			}
			for (int i = maxn - 1; i >= 1 && count < n; i--)
			{
				count++;
				num = i;
			}
			if (count == n)
				break;
			maxn += 2;
		}
		count = 0;
		for (;;)
		{
			for (int i = 1; i <= maxd && count < n; i++)
			{
				count++;
				den = i;
			}
			for (int i = maxd - 1; i >= 1 && count < n; i--)
			{
				count++;
				den = i;
			}
			if (count == n)
				break;
			maxd += 2;
		}
		cout << "TERM " << n << " IS " << num << "/" << den << endl;
	}
	return 0;
}*/