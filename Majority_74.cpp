#include<iostream>

using namespace std;

int main74()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0, x = 0, m = 0, c = 0; 
		cin >> n;
		int *arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			arr[i] = x;
		}
		for (int i = 0; i < n; i++)
		{
			if (c == 0)
			{
				m = arr[i];
				c = 1;
				continue;
			}
			if (arr[i] != m)
			{
				c--;
				continue;
			}
			if (arr[i] == m)
			{
				c++;
				continue;
			}
		}
		c = 0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] == m)
				c++;
		}
		if (2 * c > n)
			cout << "YES " << m << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}