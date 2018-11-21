#include<iostream>

using namespace std;

char maze[21][21];

int dynamicmaze(int r, int c, int rsize, int csize)
{	
	int a = 0, b = 0, e = 0, d = 0;
	if ((r == rsize || c == csize || r == 0 || c == 0) && maze[r][c] == '.' /*&& maze[r][c] == '*'*/)
	{
		a += 1;
	}
	maze[r][c] = '-';
	if (c < csize && maze[r][c + 1] == '.')
	{
		a = dynamicmaze(r, c + 1, rsize, csize);
	}
	if (r < rsize && maze[r + 1][c] == '.')
	{
		b = dynamicmaze(r + 1, c, rsize, csize);
	}
	if (r > 0 && maze[r - 1][c] == '.')
	{
		e = dynamicmaze(r - 1, c, rsize, csize);
	}
	if (c > 0 && maze[r][c - 1] == '.')
	{
		d = dynamicmaze(r, c - 1, rsize, csize);
	}
	return a + b + e + d;
}

int main162()
{	
	int t = 0;
	cin >> t;
	while (t--)
	{
		int r, c;
		cin >> r >> c;
		r--; 
		c--;
		for (int i = 0; i <= r; i++)
		{
			for (int j = 0; j <= c; j++)
			{
				cin >> maze[i][j];
			}
		}
		int i = 0, j = 0, sol = 0, count = 0;		
		for (int p = 0; p <= c; p++)
		{
			if (maze[0][p] == '.')
			{
				i = 0;
				j = p;
				maze[i][j] = '-';
				sol += dynamicmaze(i, j, r, c);
				count++;
			}
			if (maze[r][p] == '.')
			{
				i = r;
				j = p;
				maze[i][j] = '-';
				sol += dynamicmaze(i, j, r, c);
				count++;
			}
		}
		for (int p = 0; p <= r; p++)
		{
			if (maze[p][0] == '.')
			{
				i = p;
				j = 0;
				maze[i][j] = '-';
				sol += dynamicmaze(i, j, r, c);
				count++;
			}
			if (maze[p][c] == '.')
			{
				i = p;
				j = c;
				maze[i][j] = '-';
				sol += dynamicmaze(i, j, r, c);
				count++;
			}
		}
		if (sol != 1 || (r == 0 && c == 0) || count != 1)
		{
			cout << "invalid" << endl;			
		}
		else
		{
			cout << "valid" << endl;
		}		
	}
	return 0;
}