#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <queue>

using namespace std;

bool primeprimepath[10000], visited[10000];
int d[10000];

void genPrime(int a, int b) 
{
	int p, l, i;
	memset(primeprimepath, true, sizeof(primeprimepath));
	for (p = 2; p*p <= b; p++) 
	{
		l = a / p;
		l *= p;
		for (i = l; i <= b; i += p) 
		{
			if (i >= a && i != p)
				primeprimepath[i] = false;
		}
	}
}
int bfs(int a, int b) 
{
	memset(visited, false, sizeof(visited));
	memset(d, -1, sizeof(d));
	queue<int>q;
	q.push(a);
	visited[a] = true;
	int c = 0, i, temp, j, h, u;
	char num[8];
	d[a] = 0;
	while (!q.empty()) 
	{
		u = q.front();
		q.pop();
		sprintf_s(num, "%d", u);
		for (i = 0; i<4; i++) 
		{
			for (j = 0; j <= 9; j++) 
			{
				if (i == 0 && j == 0)
					continue;
				else 
				{
					num[i] = j + '0';
					temp = atoi(num);
					if (!visited[temp] && primeprimepath[temp] && temp != u) 
					{
						q.push(temp);
						visited[temp] = true;
						d[temp] = d[u] + 1;
						if (temp == b)
							return d[b];
					}
				}
			}
			sprintf_s(num, "%d", u);
		}
	}
	return d[b];
}
int main239() 
{
	int t, a, b, dist;
	cin >> t;
	genPrime(1000, 9999);
	while (t--) 
	{
		cin >> a >> b;
		if (a == b) 
		{
			cout << 0 << endl;
			continue;
		}
		dist = bfs(a, b);
		if (dist == -1)
			cout << "impossible" << endl;
		else
			cout << dist << endl;
	}
	return 0;
}