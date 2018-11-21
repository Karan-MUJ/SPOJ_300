/*#include<iostream>
#include <math.h>

using namespace std;

int main217()
{
	long long t, n, m, k, c = 1,nn, nm, nk;
	double a, b, x;
	cin >> t;
	while (t--)
	{
		a = 0;
		b = 0;
		cin >> n >> m >> k;				
		a = (n * m * k) - 1;
		x = log2 ((double)(n));		
		b += (ceil)(x);
		x = log2((double)(m));
		b += (ceil)(x);
		x = log2((double)(k));
		b += (ceil)(x);
		cout << "Case #" << c << ": " << a << ' ' << b << endl;
		c++;
	}
	return 0;
}*/