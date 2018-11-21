/*#include<iostream>
#include<queue>

using namespace std;

struct node
{
	int r, c, depth;
};

queue<node> q;
int visit[8][8];

void bfs(int row, int col)
{
	node temp;
	temp.r = row;
	temp.c = col;
	temp.depth = 0;
	q.push(temp);
	while (!q.empty())
	{
		node k = q.front();
		q.pop();
		int rr[8] = { -1,1,-1,1,-2,-2,2,2 };
		int cc[8] = { -2,-2,2,2,-1,1,-1,1 };
		for (int i = 0; i<8; ++i)
		{
			int trow = k.r + rr[i];
			int tcol = k.c + cc[i];
			if (trow >= 8 || trow<0 || tcol >= 8 || tcol<0 || visit[trow][tcol])
				continue;
			temp.r = trow;
			temp.c = tcol;
			temp.depth = k.depth + 1;
			visit[trow][tcol] = k.depth + 1;
			q.push(temp);
		}
	}
}

int main() 
{
	int t;
	char start[4], end[4];
	cin >> t;
	while (t--)
	{
		memset(visit, 0, sizeof(visit));
		cin >> start >> end;		
		int i = 8 - (start[1] - '0');
		int j = start[0] - 'a';
		visit[i][j] = 1;
		bfs(i, j);
		visit[i][j] = 0;
		i = 8 - (end[1] - '0');
		j = end[0] - 'a';
		cout << visit[i][j] << endl;
	}
	return 0;
}*/