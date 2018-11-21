/*#include<iostream>

using namespace std;

int main55 ()
{
	long long t;
	cin >> t;
	for (long long i = 0; i < t; i++)
	{
		long long x = 0, sum = 1, n = 0, p = 0;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> x;
			p += x;
			if (p <= 0)
			{
				sum += (abs(p));
				p = 0;
			}
		}
		cout << "Scenario #" << i + 1 << ": " << sum << endl;
	}
	return 0;
}*/