/*#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<iterator>

using namespace std;

#define ITER(a) for(typeof(a.begin()) it=a.begin();it!=a.end();it++)
#define MAXV 100001

vector<int> adj[MAXV];
vector <int> ::iterator it;
int dp[MAXV][2];
bool visited[MAXV][2] = { 0 };

int solve(int i, int sel, int p)
{
	if (visited[i][sel] == 1)
		return dp[i][sel];
	visited[i][sel] = 1;
	int ans = 0;
	//for (it = adj[i].begin(); it != adj[i].end(); it++)
	ITER (adj[i])
	{
		if (*it != p)
		{
			if (sel == 1)ans = ans + min(solve(*it, 1, i), solve(*it, 0, i));
			else ans = ans + solve(*it, 1, i);
		}
	}
	ans = ans + sel;
	dp[i][sel] = ans;
	return ans;
}

int main()
{
	int n, a, b;
	while (cin >> n)
	{
		memset(dp, 0, sizeof(dp));
		memset(visited, 0, sizeof(visited));
		for (int i= 0; i < MAXV; i++)
		{
			adj[i].clear();
		}
		for (int i = 1; i < n; i++) 
		{
			cin >> a >> b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		cout << min(solve(1, 1, -1), solve(1, 0, -1)) << endl;
	}
	return 0;
}*/