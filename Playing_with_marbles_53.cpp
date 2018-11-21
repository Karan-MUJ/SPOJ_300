#include<iostream>

using namespace std;

long long dp (long long n)
{
	if (n != 1)
		return (dp(n - 1) + 4 + (3 * (n - 1)));
	else
		return 5;
}

int main53()//53
{
	long long n = 0;
	while (1)
	{
		cin >> n;
		if (n == 0)
			break;
		cout << dp(n) << endl;
	}
	return 0;
}