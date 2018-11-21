#include<iostream>
#include<algorithm>
#include<math.h>
#include<utility>


using namespace std;

int main134()
{
	while (1)
	{
		int w, p;
		cin >> w >> p;
		int *v = new int[p + 1];
		int *pw = new int[p + 1];
		int sol[101][501];
		memset(sol, 0, sizeof(sol));
		/*for (int i = 0; i < 101; i++)
			for (int j = 0; j < 501; j++)
				sol[i][j] = 0;
		*/if (w == 0 && p == 0)
			break;
		for (int i = 1; i <= p; i++)
		{
			cin >> pw[i] >> v[i];
		}
		for (int i = 1; i <= p; i++)
		{
			for (int j = 1; j <= w; j++)
			{
				if (j < pw[i])
				{
					sol[i][j] = sol[i - 1][j];
				}
				else
				{
					sol[i][j] = max(v[i] + sol[i - 1][j - pw[i]], sol[i - 1][j]);
				}
			}
		}
		int max = sol[p][w];
		for (int i = 0; i <= w; i++)
		{
			if (sol[p][i] == max)
			{
				cout << i << " ";
				break;
			}
		}
		cout << sol[p][w] << endl;
		delete v;
		delete pw;
	}
	return 0;
}