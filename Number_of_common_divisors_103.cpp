#include<iostream>
#include<algorithm>
#include<numeric>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}

bool primecd[1010] = { 1, 1 };

int main103() 
{
	std::ios::sync_with_stdio(false);
	for (int i = 2; i < 1010; i++)
	{
		if (primecd[i] == 0)
		for (int j = 2; j*i < 1010; j++)
		{
			primecd[i*j] = true;
		}
	}
	int t = 0;
	cin >> t;
	while (t--)
	{
		int a = 0, b = 0;
		cin >> a >> b;
		int g = gcd(a, b), r = 1, g1 = g;
		for (int i = 2; i*i <= g1; i++)
		{
			if (primecd[i] == 0)
			{
				int c = 0;
				if (g % i == 0)
				{
					while(g % i == 0)
					{
						g /= i;
						c++;
					}
					r *= (c + 1);
				}
			}
		}
		if (g>1)
			r <<= 1;
		cout << r << endl;
	}
	return 0;
}