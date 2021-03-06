/*#include <iostream>
#include<vector>
#include<algorithm>
#define INF 1000000000

using namespace std;
typedef long long ll;
typedef pair<int, int> ii; 
typedef pair<int, ii> iii;
typedef vector<int> vi;    
typedef vector<ii> vii;

int n, m, a, b, f[1005];
ll c, p, ans;
vector<pair<ll, ii> > edges;

int find_set(int i) 
{
	return (i == f[i]) ? i : (f[i] = find_set(f[i])); 
}

void union_set(int i, int j, ll w) 
{
	int x = find_set(i);
	int y = find_set(j);
	if (x != y) 
	{
		f[y] = x;
		ans += w;
	}
}

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int TC, i, j;
	cin >> TC;
	while (TC--)
	{
		cin >> p >> n >> m;
		edges.clear();
		for (i = 0; i < m; i++) 
		{
			cin >> a >> b >> c;
			a--; b--;
			edges.push_back(make_pair(c, ii(a, b)));
		}
		sort(edges.begin(), edges.end());
		for (i = 0; i < n; i++)
			f[i] = i;
		ans = 0ll;
		for (i = 0; i < m; i++)
			union_set(edges[i].second.first, edges[i].second.second, edges[i].first);
		cout << (ans*p) << endl;
	}
	return 0;
}*/