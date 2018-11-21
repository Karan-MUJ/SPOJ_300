#include<iostream>

using namespace std;

int main159()
{
	int t, n, last, current;
	cin >> t;
	while (t--)
	{
		cin >> n;
		bool flag = 0;
		cin >> last;
			for(int i = 0; i < n - 1; i++)
			{
				cin >> current;
				current -= last;
				if (current < 0)
				{					
					flag = true;
				}
				last = current;
			}
			if (last != 0 || flag == 1)
			{
				cout << "NO" << endl;
			}
			else
			{
				cout << "YES" << endl;
			}
	}
	return 0;
}