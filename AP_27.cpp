/*#include<iostream>

using namespace std;

int main()
{
	long long t;
	cin >> t;
	for (long long z = 0; z < t; z++) 
	{
		long long x, y, s, n, d, c = 0;
		cin >> x >> y >> s;
		n = (s * 2);
		n /= (x + y);
		cout << n << endl;
		d = 2 * ((x * n) - s);
		d /= ((5 - n) * n);
		x = x - (2 * d);
		for (long long i = 0; i < n; i++)
		{
			cout << x + (c*d) << " ";
			c++;
		}
		cout << endl;
	}
	return 0;
}*/