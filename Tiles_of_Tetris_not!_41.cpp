#include<iostream>

using namespace std;

long long GCD(long long a, long long b)
{
	if (b == 0) return a;
	return GCD(b, a%b);
}

long long LCM(long long a, long long b)
{
	return b * a / GCD(a, b);
}

int main41()
{	
	while (1)
	{
		long long r, l, b;
		cin >> l >> b;
		if (l == 0 && b == 0)
			break;
		r = LCM(l, b)/GCD(l, b);
		cout << r << endl;
	}
	return 0;
}