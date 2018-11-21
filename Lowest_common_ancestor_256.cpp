/*#include<iostream> 
#include<cstring>

using namespace std;

int p[1003];
bool v[1003];

int solve(int a, int b)
{
	memset(v, false, sizeof(v));
	v[a] = true;
	while (p[a] != a)
	{
		v[a] = true;
		a = p[a];
	}
	v[a] = true;
	while (v[b] != true)
	{
		b = p[b];
	}
	return b;
}

int main()
{
	int t, n, m, x, q, y;
	cin >> t;
	for (int c = 1; c <= t; c++)
	{
		cin >> n;
		for (int i = 0; i < 1003; i++)
		{
			p[i] = i;
		}
		for (int i = 1; i <= n; i++)
		{
			cin >> m;			
			for (int j = 0; j < m; j++)
			{
				cin >> x;
				p[x] = i;
			}
		}
		cin >> q;
		cout << "Case " << c << ':' << endl;
		while (q--)
		{
			cin >> x >> y;
			cout << solve(x, y) << endl;
		}
	}
	return 0;
}*/