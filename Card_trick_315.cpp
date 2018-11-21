/*#include<iostream>
#include <cstring>
#define MAX 20500

using namespace std;

int BIT[MAX + 1], ANS[MAX], N, T;

int query(int idx)
{
	int res = 0;
	while (idx > 0)
	{
		res += BIT[idx];
		idx -= idx & -idx;
	}
	return res;
}

void update(int idx, int val)
{
	while (idx <= MAX)
	{
		BIT[idx] += val;
		idx += idx & -idx;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(false);
	cin >> T;
	while (T--)
	{
		memset(BIT, 0, sizeof(BIT));
		memset(ANS, 0, sizeof(ANS));
		cin >> N;
		for (int i = 1; i <= MAX; i++)
		{
			update(i, 1);
		}
		int l = 1, m = N, s, e;
		for (int i = 1; i <= N; i++)
		{
			l = (l + i) % m;
			l = (l) ? l : m;
			m--;
			s = 1;
			e = N;
			while (s <= e)
			{
				int mid = s + (e - s + 1) / 2, tmp;
				if ( (tmp = query(mid)) >= l)
				{
					e = mid - 1;
				}
				else if (tmp < l)
				{
					s = mid + 1;
				}
				else
				{
					break;
				}
			}
			ANS[s] = i; 
			update(s, -1);
		}
		for (int i = 1; i <= N; i++)
		{
			cout << ANS[i] << ' ';
		}
		cout << endl;
	}
	return 0;
}*/