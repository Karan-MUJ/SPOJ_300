#include<iostream>

using namespace std;

bool yo1(long long n)
{
	for (long long i = 2; i * i <= n; i++)
	{
		int count = 0;
		if (n % i == 0)
		{
			while (n%i == 0)
			{
				n /= i;
				count++;
			}
			if (i % 4 == 3 && count % 2 != 0)
				return false;
		}
	}
	return n % 4 != 3;
}

int main89() 
{
	long long n = 0, t = 0;
	cin >> t;
	while (t--)
	{
		cin >> n;
		bool stat = yo1(n);
		if (stat)
		{
			cout << "Yes" << endl;
		}
		else 
		{
			cout << "No" << endl;
		}
	}
	return 0;
}