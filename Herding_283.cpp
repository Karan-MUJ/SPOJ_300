/*#include <iostream>
using namespace std;

#define MAX 1000

char grid[MAX][MAX + 1];
int R, C, trap[MAX][MAX], cnt, last;

void floodfill(int i, int j)
{
	if (i >= 0 && j >= 0 && i<R && j<C)
	{
		if (trap[i][j])
		{
			cnt = trap[i][j];
			return;
		}
		trap[i][j] = cnt;
		if (grid[i][j] == 'W')
			floodfill(i, j - 1);
		else if (grid[i][j] == 'E') 
			floodfill(i, j + 1);
		else if (grid[i][j] == 'N')
			floodfill(i - 1, j);
		else if (grid[i][j] == 'S')
			floodfill(i + 1, j);
		trap[i][j] = cnt;
	}
}

int main()
{
	cin >> R >> C;
	for (int i = 0; i<R; i++)
		cin >> grid[i];
	for (int i = 0; i<R; i++)
		for (int j = 0; j<C; j++)
			if (!trap[i][j])
			{
				cnt = last + 1;
				floodfill(i, j);
				if (cnt > last)
					last++;
			}
	cout << last << endl;
	return 0;
}*/