#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cfnarr[1000009];
vector <int> cfnarr1;

void cfn()
{
	for (int i = 0; i < 1000009; i++)
	{
		cfnarr[i] = true;
	}
	cfnarr[0] = 0;
	cfnarr[1] = 1;
	for (int i = 2; i * i * i < 1000009; i++)
	{
		if (cfnarr[i] == 1)
		{
			for (int j = 1; i * i * i * j < 1000009; j++)
			{
				cfnarr[i * i * i * j] = false;
			}
		}
	}
	for (int i = 0; i < 1000009; i++)
	{
		if (cfnarr[i] == true)
		{
			cfnarr1.push_back(i);
		}
	}
}

int main186()
{
	int t = 0 , n, c = 0, copy;
	bool arr[1000009];
	cfn();
	cin >> t;
	while (++c <= t)
	{
		cin >> n;
		copy = lower_bound(cfnarr1.begin(), cfnarr1.end(), n) - cfnarr1.begin();
		if (cfnarr1[copy] == n)
		{
			cout << "Case " << c << ':' << ' ' << copy + 1 << endl;
		}
		else
		{
			cout << "Case " << c << ':' << ' ' << "Not Cube Free" << endl;
		}
	}
	return 0;
}