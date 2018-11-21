/*#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

typedef pair< int, int > pii;
typedef pair< int, pii > edge;
const int MAX = 10001;

vector< edge > edges;
int parent[MAX];

int find(int u) 
{
	if (u != parent[u]) parent[u] = find(parent[u]);
	return parent[u];
}

int main() 
{
	int t, i, n, e, u, v, w, cost, sz;
	string s;	
	cin >> t;
	while (t--) 
	{
		edges.clear();
		cin >> n;
		for (i = 1; i <= n; i++) 
		{
			parent[i] = i;
			cin >> s >> e;
			while (e--) 
			{
				cin >> v >> w;
				if (v > i) 
					edges.push_back(edge(w, pii(i, v)));
			}
		}
		sort(edges.begin(), edges.end());
		sz = edges.size();
		for (cost = i = 0; i < sz; i++) 
		{
			u = find(edges[i].second.first);
			v = find(edges[i].second.second);
			w = edges[i].first;
			if (u != v) 
			{
				cost += w;
				parent[u] = parent[v];
			}
		}
		cout << cost << endl;
	}
	return 0;
}*/