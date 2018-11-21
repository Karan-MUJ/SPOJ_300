/*#include<iostream>
#include<queue>
#include<cstring>

using namespace std;

typedef pair<int, int> ii;
const int mx = 110;
int arr[mx][mx], r, c, x, y, t, path[mx][mx];
bool visited[mx][mx];

struct compare
{
	bool operator() (pair <int, int> a, pair <int, int> b)
	{
		return path[a.first][a.second] > path[b.first][b.second];
	}
};

void dijkstra()
{
	for (int i = 0; i <= r + 1; i++)
	{
		visited[i][0] = visited[i][c + 1] = true;
	}
	for (int i = 0; i <= c + 1; i++)
	{
		visited[0][i] = visited[r + 1][i] = true;
	}
	priority_queue <pair<int, int>, compare> Q;
	Q.push(pair <int, int>(1, 1));
	path[1][1] = arr[1][1];
	visited[1][1] = true;
	pair <int, int> p;
	while (!Q.empty())
	{
		p = Q.top();
		if (p.first == x && p.second == y)
		{
			return;
		}
		Q.pop();
		visited[p.first][p.second] = true;
		if (path[p.first][p.second] > t)
		{
			continue;
		}
		if (!visited[p.first + 1][p.second])
		{
			Q.push(pair<int, int>(p.first + 1, p.second));
			if (path[p.first + 1][p.second] == -1)
			{
				path[p.first + 1][p.second] = path[p.first][p.second] + arr[p.first + 1][p.second];
			}
			else
			{
				path[p.first + 1][p.second] = min(path[p.first][p.second] + arr[p.first + 1][p.second], path[p.first + 1][p.second]);
			}
		}
		if (!visited[p.first - 1][p.second])
		{
			Q.push(pair<int, int>(p.first - 1, p.second));
			if (path[p.first - 1][p.second] == -1)
			{
				path[p.first - 1][p.second] = path[p.first][p.second] + arr[p.first - 1][p.second];
			}
			else
			{
				path[p.first - 1][p.second] = min(path[p.first][p.second] + arr[p.first - 1][p.second], path[p.first - 1][p.second]);
			}
		}
		if (!visited[p.first][p.second + 1])
		{
			Q.push(pair<int, int>(p.first, p.second + 1));
			if (path[p.first][p.second + 1] == -1)
			{
				path[p.first][p.second + 1] = path[p.first][p.second] + arr[p.first][p.second + 1];
			}
			else
			{
				path[p.first][p.second + 1] = min(path[p.first][p.second] + arr[p.first][p.second + 1], path[p.first][p.second + 1]);
			}
		}
		if (!visited[p.first][p.second - 1])
		{
			Q.push(pair<int, int>(p.first, p.second - 1));
			if (path[p.first][p.second - 1] == -1)
			{
				path[p.first][p.second - 1] = path[p.first][p.second] + arr[p.first][p.second - 1];
			}
			else
			{
				path[p.first][p.second - 1] = min(path[p.first][p.second] + arr[p.first][p.second - 1], path[p.first][p.second - 1]);
			}
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		memset(visited, false, sizeof(visited));
		memset(path, -1, sizeof(path));
		cin >> r >> c;
		for (int i = 1; i <= r; i++)
		{
			for (int j = 1; j <= c; j++)
			{
				cin >> arr[i][j];
			}
		}
		cin >> x >> y >> t;
		dijkstra();
		if (path[x][y] != -1)
		{
			cout << "YES" << endl << t - path[x][y] << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}*/