/*#include<iostream>
#include<algorithm>
#include <functional>

using namespace std;

int main61()
{
	int t = 0; 
	cin >> t;
	for (t; t > 0; t--)
	{
		int m = 0, n = 0, x = 1, y = 1, temp = 0, cm = 0, cn = 0, sum = 0;
		cin >> m >> n;
		int *a = new int [m - 1];
		int *b = new int[n - 1];
		for (int i = 0; i < m - 1; i++)
		{
			cin >> temp;
			a[i] = temp;
		}
		for (int i = 0; i < n - 1; i++)
		{
			cin >> temp;
			b[i] = temp;
		}
		sort(a, a + (m - 1), greater<int>());
		sort(b, b + (n - 1), greater<int>());
		for (int i = 0; i < (m - 1) + (n - 1); i++)
		{
			if (a[cm] >= b[cn] && cm != (m - 1))
			{
				sum = sum + a[cm] * x;
				y++;
				cm++;
				continue;
			}
			else if (cn != (n - 1))
			{
				sum = sum + b[cn] * y;
				x++;
				cn++;
				continue;
			}
			else
				break;
		}
		delete a;
		delete b;
		cout << sum << endl;
	}
	return 0;
}*/