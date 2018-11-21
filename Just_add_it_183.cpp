#include<iostream>
#include<math.h>

using namespace std;

long long modexpo(long long a, long long b, int n)
{
	long long d = 1;
	while (b)
	{
		if (b % 2)
		{
			d = (d*a) % n;
		}
		b >>= 1;
		a = (a*a) % n;
	}
	return d;
}
int main183()
{
	long long n, k;
	cin >> n >> k;
	while (n)
	{
		long long a, b, c, d, ans;
		b = modexpo(n, k, 10000007);
		a = (2 * modexpo(n - 1, k, 10000007)) % 10000007;
		d = modexpo(n, n, 10000007);
		c = (2 * modexpo(n - 1, n - 1, 10000007)) % 10000007;
		ans = ((a + b) % 10000007 + (c + d) % 10000007) % 10000007;
		cout << ans << endl;
		cin >> n >> k;
	}
	return 0;
}