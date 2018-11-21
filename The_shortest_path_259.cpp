/*#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <queue>

using namespace std;

#define MAX 10001
#define INF 1000000000
#define pii pair<int,int>
#define psi pair<string,int>

map< string, int > M;
map< string, int > ::iterator it;
vector< pii > G[MAX];
int d[MAX], f[MAX];

int main()
{
	int t, n, e, i, j, q, start, end, v, w, wi, vi, ui, sz;
	char city[20];
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (i = 1; i <= n; i++)
		{
			cin >> city >> e;
			M.insert(psi(city, i));
			for (j = 1; j <= e; j++)
			{
				cin >> v >> w;
				G[i].push_back(pii(w, v));
			}
		}
		cin >> q;;
		for (i = 0; i<q; i++)
		{
			cin >> city;
			it = M.find(city);
			start = (*it).second;
			cin >> city;
			it = M.find(city);
			end = (*it).second;
			priority_queue< pii, vector< pii >, greater< pii > > Q;
			Q.push(pii(0, start));
			for (j = 1; j <= n; j++)
			{
				d[j] = INF;
				f[j] = 0;
			}
			d[start] = 0;
			while (!Q.empty())
			{
				ui = Q.top().second;
				wi = Q.top().first;
				Q.pop();
				if (f[ui]) continue;
				sz = G[ui].size();
				for (j = 0; j<sz; j++)
				{
					vi = G[ui][j].second;
					w = G[ui][j].first;
					if (!f[vi] && d[ui] + w < d[vi])
					{
						d[vi] = d[ui] + w;
						Q.push(pii(d[vi], vi));
					}
				}
				f[ui] = 1;
				if (ui == end) break;
			}
			cout << d[end] << endl;
		}
		for (i = 1; i <= n; i++) G[i].clear();
		M.clear();
	}
	return 0;
}*/