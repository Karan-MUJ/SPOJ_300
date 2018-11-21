#include<iostream>
#include<string>

using namespace std;

long long winner(long long n, long long k)
{
	if (n == 2 || n == 1)
		return 1;
	else
	{
		long long r = (winner(n - 1, k) + k) % n;
		if (r == 0)
			return n;
		else
			return r;
	}
}

int main105()
{
	while (1) 
	{
		string s;
		cin >> s;
		long long a = 0, b = 1;
		a = (s[0] - '0') * 10 + (s[1] - '0');
		if (a == 0)
			break;
		for (int i = 0; i < (s[3] - '0'); i++)
		{
			b *= 10;
		}
		a *= b;		
		cout << winner(a, 2) << endl;
	}
	return 0;
}