/*#include<iostream>
#include<iomanip>
#include<vector>
#include<queue>
#include<cstring>
# define inf 999999

using namespace std;

struct edge { int d, v; };

double per[105];
vector <edge> adj[105];

double percent(double a, double b)
{
	return (a / 100) * (b / 100) * 100;
}

bool operator <(edge a, edge b) 
{
	return a.v < b.v;
}

void dijkstra()
{
	priority_queue <edge> q;
	q.push(edge{ 1, 100 });
	edge temp, k;
	per[1] = 100;
	while (!q.empty())
	{
		temp = q.top();
		q.pop();
		for (int i = 0; i < adj[temp.d].size(); i++)
		{
			k = adj[temp.d][i];
			if (percent(per[temp.d], k.v) > per[k.d])
			{
				per[k.d] = percent(per[temp.d], k.v);
				q.push(k);
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	int n, m, b, a;
	int c;
	cin >> n;
	while (n)
	{
		memset(per, -inf, sizeof(per));
		for (int i = 0; i < 105; i++)
		{
			adj[i].clear();
		}
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> a >> b >> c;
			adj[a].push_back(edge{ b, c });
			adj[b].push_back(edge{ a, c });
		}
		dijkstra();
		cout << std::fixed;
		cout << std::setprecision(6);
		cout << per[n] << " percent" << endl;
		cin >> n;
	}
	return 0;
}*/