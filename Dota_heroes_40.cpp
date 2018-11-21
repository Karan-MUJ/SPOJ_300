#include<iostream>

using namespace std;

int main40 ()
{
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n = 0, m = 0, d = 0, sum = 0;
		cin >> n >> m >> d;
		for (int j = 0; j < n; j++)
		{
			int x = 0;
			cin >> x;
			if (x > d)
			{
				if (x%d)
					sum += x / d;
				else
					sum += (x / d) - 1;
			}
		}
		if (sum >= m)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}