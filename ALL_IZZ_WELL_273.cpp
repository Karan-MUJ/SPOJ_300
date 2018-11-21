/*#include<iostream>
//#include<cstring>

using namespace std;

char arr[100][100];
bool visited[100][100];
int t, x, y;
int r[3] = { -1, 0, 1 };
char aiw[10] = { 'A', 'L', 'L', 'I', 'Z', 'Z', 'W', 'E', 'L', 'L' };

bool alliswell(int i, int j, int idx)
{
	bool ans = false;
	if (idx == 10)
	{
		return true;
	}
	if (visited[i][j] == true)
	{
		return 0;
	}
	if (i < 0 || i >= x || j < 0 || j >= y)
	{
		return 0;
	}
	if (aiw[idx] != arr[i][j])
	{
		return 0;
	}	
	else
	{
		//arr1[i][j] = '-';
		visited[i][j] = true;
		for (int d = 0; d < 3 && !ans; d++)
		{
			for (int e = 0; e < 3 && !ans; e++)
			{
				if (r[d] || r[e])
				{
					ans = alliswell(i + r[d], j + r[e], idx + 1);
				}
			}
		}
		visited[i][j] = false;
	}
	return ans;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> t;
	while (t--)
	{
		//memset(visited, false, sizeof(visited));
		cin >> x >> y;
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < y; j++)
			{
				cin >> arr[i][j];
				//arr1[i][j] = arr[i][j];
			}
		}
		bool sol = false;
		for (int i = 0; i < x && !sol; i++)
		{
			for (int j = 0; j < y && !sol; j++)
			{
				if (arr[i][j] == 'A')
				{
					sol = alliswell(i, j, 0);*/
					/*for (int i1 = 0; i1 < x && !sol; i1++)
					{
						for (int j1 = 0; j1 < y && !sol; j1++)
						{
							arr1[i1][j1] = arr[i1][j1];
						}
					}*/
				/*}
			}
		}
		if (sol)
		{
			cout << "YES" << endl;
		}
		else 
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}*/