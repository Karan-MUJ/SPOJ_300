/*#include<iostream>

using namespace std;

long long amz(int p, int c, int n)
{
	if (n == 0)
		return 0;
	if (c == n)
	{
		return 1;
	}
	if (c == 0)
	{
		return (amz(0, c + 1, n) + amz(1, c + 1, n) + amz(2, c + 1, n));
	}
	if (p == 0)
	{
		return (amz(1, c + 1, n) + amz(0, c + 1, n));
	}
	else if (p == 1)
	{
		return (amz(0, c + 1, n) + amz(2, c + 1, n) + amz(1, c + 1, n));
	}
	else
	{
		return (amz(1, c + 1, n) + amz(2, c + 1, n));
	}
}

int main()
{
	int n = 0;
	cin >> n;
	cout << amz(0, 0, n) << endl;
	return 0;
}*/