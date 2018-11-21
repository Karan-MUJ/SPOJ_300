#include <stdio.h>
#include<algorithm>
#define ll long long

ll GCD1(ll a, ll b)
{
	ll r;

	while (b != 0)
	{
		r = b;
		b = a % b;
		a = r;
	}

	return r;
}

int main118()
{
	int testCases;
	ll x, y, z, gcd;

	scanf_s("%d", &testCases);

	while (testCases--)
	{
		scanf_s("%lld %lld %lld", &x, &y, &z);

		if (z > x && z > y)
			printf_s("NO\n");
		else
		{
			gcd = GCD1(x, y);
			if (z % gcd)
				printf_s("NO\n");
			else
				printf_s("YES\n");
		}

	}

	return 0;
}