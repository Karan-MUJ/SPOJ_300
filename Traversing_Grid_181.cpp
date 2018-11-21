#include<iostream>

using namespace std;

int main181()
{
	long long t, m, n;
	cin >> t;
	while (t--)
	{
		cin >> m >> n;
		if(n >= m)
		{
			if (m & 1)
			{
				cout << 'R' << endl;
			}
			else
			{
				cout << 'L' << endl;
			}
		}
		else
		{
			if (n & 1)
			{
				cout << 'D' << endl;
			}
			else
			{
				cout << 'U' << endl;
			}
		}
	}
	return 0;
}