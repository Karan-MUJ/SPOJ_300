/*#include<iostream>
#include<queue>
#include<cstring>
#define INF 99999999

using namespace std;

int bitmap[183][183];

void bitmapbfs(int i, int j, int m, int n)
{	
	queue <int> Q;
	int x, y;
	Q.push(i);
	Q.push(j);
	bitmap[i][j] = 0;
	while(!Q.empty())
	{
		x = Q.front();
		Q.pop();
		y = Q.front();
		Q.pop();
		int dist = bitmap[x][y] + 1;
		if (y - 1 >= 0 && dist < bitmap[x][y - 1])
		{
			Q.push(x);
			Q.push(y - 1);
			bitmap[x][y - 1] = dist;
		}
		//right
		if (y + 1 < n && dist < bitmap[x][y + 1])
		{
			Q.push(x);
			Q.push(y + 1);
			bitmap[x][y + 1] = dist;
		}

		//up
		if (x - 1 >= 0 && dist < bitmap[x - 1][y])
		{
			Q.push(x - 1);
			Q.push(y);
			bitmap[x - 1][y] = dist;
		}

		//down
		if (x + 1 < m && dist < bitmap[x + 1][y])
		{
			Q.push(x + 1);
			Q.push(y);
			bitmap[x + 1][y] = dist;
		}
	}
}

int main()
{
	int t, x, y;
	char a;
	cin >> t;
	while (t--)
	{
		cin >> x >> y;
		vector <pair<int, int>> vc;
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < y; j++)
			{
				cin >> a;
				if (a == '1')
				{
					bitmap[i][j] = -INF;
					vc.push_back(make_pair(i, j));
				}
				else
				{
					bitmap[i][j] = INF;
				}
			}
		}
		for (int i = 0; i < vc.size(); i++)
		{
			bitmapbfs(vc[i].first, vc[i].second, x, y);
		}
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < y; j++)
			{
				cout << bitmap[i][j] << ' ';
			}
			cout << endl;
		}
	}
	return 0;
}*/