#include<iostream>

using namespace std;

int main23()//23
{
	int m, n; 
	for (;;)
	{		
		cin >> m >> n;
		if (m == 0 & n == 0)
			break;
		{
			if (n < 2)
			{
				cout << "N" << endl;
				continue;
			}
			int ac = 100000, dc = 100000, dsc = 100000, x;
			for (int i = 0; i < m; i++)
			{
				cin >> x;
				if (ac > x)
					ac = x;
			}
			for (int i = 0; i < n; i++)
			{
				cin >> x;
				if (dc > x)
				{
					dc = x;
					continue;
				}
				else if (dsc > x)
					dsc = x;
			}
			if (dc <= ac && dsc <= ac)
				cout << "N" << endl;
			else
				cout << "Y" << endl;
		}
	}
	return 0;
}