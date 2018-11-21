#include<iostream>

using namespace std;
int fib[2][2] = { {1,1} , {1,0} }, fiba[2][2] = {{1,1} , {1,0}};

void multiplyfib()
{
	int a, b, c, d;
	a = fib[0][0] * fiba[0][0] + fib[0][1] * fiba[1][0];
	b = fib[0][0] * fiba[0][1] + fib[0][1] * fiba[1][1];
	c = fib[1][0] * fiba[0][0] + fib[1][1] * fiba[1][0];
	d = fib[1][0] * fiba[0][1] + fib[1][1] * fiba[1][1];
	fib[0][0] = a;
	fib[0][1] = b;
	fib[1][0] = c;
	fib[1][1] = d;
}

long long fibsum(int n)
{
	if (n == 0)
		return 0;
	fib[0][0] = 1;
	fib[0][1] = 1;
	fib[1][0] = 1;
	fib[1][1] = 0;
	for (int i = 0; i < n - 1; i++)
	{
		multiplyfib();
	}
	return fib[0][1];
}

int main224()
{
	int t;
	cin >> t;
	long long m, n;
	while (t--)
	{
		cin >> n >> m;
		cout << fibsum(n) - fibsum(m) << endl;
	}
	return 0;
}