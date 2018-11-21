/*#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

typedef long long ll;
const int RMAX = 1000009;
const int NMAX = 1009;

struct Road { int u, v; };

ll BIT[NMAX], m, n;
Road roads[RMAX];

ll read(int idx) 
{
	ll sum = 0;
	while (idx > 0) 
	{
		sum += BIT[idx];
		idx -= (idx & -idx);
	}
	return sum;
}

void add(int idx, int v) 
{
	while (idx <= m) 
	{
		BIT[idx] += v;
		idx += (idx & -idx);
	}
}

bool comp(const Road a, const Road b) 
{
	return ((a.u == b.u) ? (a.v < b.v) : (a.u < b.u));
}

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(false);
	int t, k, i, j, cs = 1;
	ll res;
	cin >> t;
	while (t--) 
	{
		memset(BIT, 0, sizeof(BIT));
		res = 0;
		cin >> n >> m >> k;
		for (i = 0; i < k; i++)
			cin >> roads[i].u >> roads[i].v;
		sort(roads, roads + k, comp);
		for (i = k - 1; i >= 0; i = j) 
		{
			for (j = i; j >= 0 && roads[j].u == roads[i].u; j--) 
				res += read(roads[j].v - 1);
			for (j = i; j >= 0 && roads[j].u == roads[i].u; j--) 
				add(roads[j].v, 1);
		}
		cout << "Test case " << cs++ << ": " << res << endl;
	}
	return 0;
}*/