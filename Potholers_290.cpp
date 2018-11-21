/*#include<iostream>
#include<cstring>
#include<queue>
# define inf 1<<20

using namespace std;

int v[210][210];
int N, vis[210], p[210], s, d;

int flow()
{
	memset(p, -1, sizeof p);
	memset(vis, 0, sizeof vis);
	p[s] = -1;
	queue<int> Q;
	Q.push(s);
	vis[s] = 1;
	bool f = 0;
	while (!Q.empty() && !f)
	{
		int tmp = Q.front();
		Q.pop();		
		for (int n = 1; n <= N && !f; n++)
			if (!vis[n] && v[tmp][n]>0)
			{
				Q.push(n);
				vis[n] = 1;
				p[n] = tmp;
				if (n == d) { f = 1; }
			}
	}
	int l = d, nflow = inf;
	while (p[l] != -1)
	{		
		nflow = min(nflow, v[p[l]][l]);
		l = p[l];
	}	
	l = d;
	while (p[l] != -1)
	{
		v[p[l]][l] -= nflow;
		v[l][p[l]] += nflow;
		l = p[l];
	}
	return nflow == inf ? 0 : nflow;
}


int main()
{
	int t, k, tmp;
	for (cin >> t; t>0; t--)
	{
		cin >> N;
		memset(v, 0, sizeof v);
		for (int i = 1; i<N; i++)
		{
			cin >> tmp;
			for (int j = 0; j<tmp; j++)
			{
				cin >> k;
				if (i == 1 || k == N)v[i][k] = 1;
				else v[i][k] = inf;
			}
		}
		s = 1, d = N;
		int p_c = 0;		
		int t_1;
		while (1)
		{
			t_1 = flow();
			if (t_1 == 0)
				break;
			p_c += t_1;
		}
		cout << p_c << endl;
	}
	return 0;
}*/