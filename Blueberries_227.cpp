/*#include<iostream>
#include<cstring>
#include<algorithm>
#define sz 1010
#define b blueberries

using namespace std;

int blue[sz], blueberries;
int bluem[sz][sz];

long long blueb(int i, int n, int limit)
{
	int p1 = 0, p2 = 0;
	if (bluem[i][limit] != -1)
		return bluem[i][limit];
	if (i >= n)
		return 0;
	if (limit + blue[i] <= b)
		p1 = blueb(i + 2, n, limit + blue[i]) + blue[i];
	p2 = blueb(i + 1, n, limit);
	return bluem[i][limit] = max(p1, p2);
}

int main227()
{
	int t, c = 0, sol, n, k;
	cin >> t;
	while (t--)
	{
		memset(bluem, -1, sizeof(bluem));
		cin >> n >> b;
		for (int i = 0; i < n; i++)
		{
			cin >> blue[i];
		}
		sol = blueb(0, n, 0);
		cout << "Scenario #" << ++c << ": " << sol << endl;
	}
	return 0;
}*/