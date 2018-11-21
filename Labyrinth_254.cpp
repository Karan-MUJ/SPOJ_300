/*#include <iostream>
#include<utility>

using namespace std;

#define MAX 1111
#define I first
#define J second

char grid[MAX][MAX];
int R, C, best;
pair <int, int> next;

void dfs(int i, int j, int d)
{
	if (i<0 || i >= R || j<0 || j >= C || grid[i][j] != '.') return;
	grid[i][j] = 'v';
	dfs(i + 1, j, d + 1);
	dfs(i, j + 1, d + 1);
	dfs(i, j - 1, d + 1);
	dfs(i - 1, j, d + 1);
	grid[i][j] = '.';
	if (d > best)
	{
		best = d;
		next.I = i;
		next.J = j;
	}
}

int find()
{
	int maxlen = 0;
	if (grid[next.I][next.J] != '.') return 0;
	while (true)
	{
		best = 0;
		dfs(next.I, next.J, 0);
		if (best <= maxlen) break;
		else maxlen = best;
	}
	return maxlen;
}

int main()
{
	int t, i, j;
	cin >> t;
	while (t--)
	{
		cin >> C >> R;
		for (i = 0; i<R; i++)
			cin >> grid[i];
		next.I = next.J = 0;
		for (i = 0; i<R; i++)
			for (j = 0; j<C; j++)
				if (grid[i][j] == '.')
				{
					next.I = i;
					next.J = j;
					break;
				}
		cout << "Maximum rope length is " << find() << ' ' << endl;
	}
	return 0;
}*/