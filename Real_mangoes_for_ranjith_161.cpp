#include<iostream>

using namespace std;

int main161()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, sol = 0;
		cin >> n;
		for (int i = 1; i < n + 1; i++)
		{
			if ((i % 2) != 0)
			{
				sol = (sol + i) % n;
			}
		}
		cout << sol << endl;
		return 0;
	}
}