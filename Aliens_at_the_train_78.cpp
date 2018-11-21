/*#include<iostream>

using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int t = 0, maxs, maxh, curh, curs, a, b, frnt, bck;
	long long arr[100009];
	cin >> t;
	while (t--)
	{
		maxs = 0;
		maxh = 0;
		curh = 0;
		curs = 0;
		frnt = 0;
		bck = 0;
		cin >> a >> b;
		for (int  i = 0; i < a; i++)
		{
			cin >> arr[i];
		}
		while(frnt <= a)
		{
			while (curh < b && frnt < a)
			{
				curh += arr[frnt];
				curs++;
				frnt++;
			}
			if (curs > maxs)
			{
				if (curh > b)
				{
					maxs = curs - 1;
					maxh = curh - arr[frnt - 1];
				}
				else if (curs == maxs && curh < maxh)
				{
					maxh = curh;
				}
				else
				{
					maxs = curs;
					maxh = curh;
				}
			}
			curh -= arr[bck];
			bck++;
			curs--;			
		}
		cout << maxh << ' ' << maxs << endl;
	}
	return 0;
}*/