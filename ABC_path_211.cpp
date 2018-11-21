/*#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int abc[52][52];
char abcc[52][52];
int abcm[52][52];

long long path(int i, int j, int h, int w)
{
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h1 = 0;
	if (abcm[i][j] != -1)
		return abcm[i][j];
	if (abc[i + 1][j + 1] == abc[i][j] + 1)
	{
		f = 1 + path(i + 1, j + 1, h, w);
	}
	if (abc[i - 1][j - 1] == abc[i][j] + 1)
	{
		b = 1 + path(i - 1, j - 1, h, w);
	}
	if (abc[i + 1][j - 1] == abc[i][j] + 1)
	{
		d = 1 + path(i + 1, j - 1, h, w);
	}
	if (abc[i - 1][j + 1] == abc[i][j] + 1)
	{
		h1 = 1 + path(i - 1, j + 1, h, w);
	}
	if (abc[i - 1][j] == abc[i][j] + 1)
	{
		a = 1 + path(i - 1, j, h, w);
	}
	if (abc[i][j - 1] == abc[i][j] + 1)
	{
		c = 1 + path(i, j - 1, h, w);
	}
	if (abc[i][j + 1] == abc[i][j] + 1)
	{
		g = 1 + path(i, j + 1, h, w);
	}
	if (abc[i + 1][j] == abc[i][j] + 1)
	{
		e = 1 + path(i + 1, j, h, w);
	}
	abcm[i][j] = max(a, max(b, max(c, max(d, max(e, max(f, max(g, h1)))))));
	if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g == 0 && h1 == 0)
	{
		return 1;
	}
	if (abcm[i][j] == -1)
	{
		return 1;
	}
	else
		return abcm[i][j];
}

int main()
{
	int h, w, c = 1;
	while (true)
	{
		memset(abc, 0, sizeof(abc));
		memset(abcc, 0, sizeof(abcc));
		cin >> h >> w;
		if (h == 0 && w == 0)
		{
			return 0;
		}
		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= w; j++)
			{
				cin >> abcc[i][j];
				abc[i][j] = (int)abcc[i][j];
				abcm[i][j] = -1;
			}
		}
		for (int i = 0; i <= h + 1; i++)
		{
			abc[i][0] = -200;
			abc[i][51] = -200;
		}
		for (int i = 0; i <= w + 1; i++)
		{
			abc[0][i] = -200;
			abc[51][i] = -200;
		}
		int max = 0, temp;
		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= w; j++)
			{
				if (abc[i][j] == (int)'A')
				{
					temp = 0;
					temp = path(i, j, h, w);
					if (temp > max)
						max = temp; 
				}
			}
		}
		cout << "Case " << c << ": " << max << endl;
		c++;
	}
	return 0;
}*/