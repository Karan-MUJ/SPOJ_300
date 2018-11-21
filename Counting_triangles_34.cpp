#include<iostream>

using namespace std;

int main34()
{
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		long long n = 0;
		cin >> n;
		if (n%2)
		{
			n = ((n)*(n + 2)*(2 * n + 1) - 1);
			n /= 8;
		}
		else
		{
			n = ((n)*(n + 2)*(2 * n + 1));
			n /= 8;
		}
		cout << n << endl;
	}
	return 0;
}