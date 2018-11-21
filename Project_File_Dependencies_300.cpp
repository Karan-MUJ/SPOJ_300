/*#include<iostream>
#include<vector>
#include<queue>

int depends_on_howmany[100];
int depend_on_this[100][100];
int howmany_depend_on_this[100];

using namespace std;

int main()
{
	int n, m, x, y, z, i, j, cnt = 0;
	cin >> n >> m;
	for (i = 0; i < m; i++)
	{
		cin >> x;
		x--;
		cin >> depends_on_howmany[x];
		for (j = 0; j < depends_on_howmany[x]; j++) 
		{
			cin >> y;
			depend_on_this[--y][howmany_depend_on_this[y]++] = x;
		}
	}
	priority_queue<int, vector<int>, greater<int> > Q;
	for (i = 0; i < n; i++)
	{
		if (!depends_on_howmany[i])
		{
			Q.push(i);
		}
	}
	while (cnt < n)
	{
		int t = Q.top();
		Q.pop();
		cnt++;
		if (cnt < n)
		{
			cout << t + 1 << ' ';
		}
		else 
		{
			cout << t + 1 << endl;
		}
		for (i = 0; i < howmany_depend_on_this[t]; i++)
		{
			if (!(--depends_on_howmany[depend_on_this[t][i]]))
			{
				Q.push(depend_on_this[t][i]);
			}
		}
	}
	return 0;
}*/