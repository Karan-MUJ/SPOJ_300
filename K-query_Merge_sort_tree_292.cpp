/*#include<iostream>
#include<algorithm>
#include<vector>
# define mx 30010

using namespace std;

vector <int> arr[4 * mx];

void merge(int c, int l, int mid, int r)
{
	int i = 0, j = 0;
	while (i < arr[2 * c].size() && j < arr[2 * c + 1].size())
	{
		if (arr[2 * c][i] <= arr[2 * c + 1][j])
		{
			arr[c].push_back(arr[2 * c][i]);
			i++;
		}
		else
		{
			arr[c].push_back(arr[2 * c + 1][j]);
			j++;
		}
	}
	while (i != arr[2 * c].size())
	{
		arr[c].push_back(arr[2 * c][i]);
		i++;
	}
	while (j != arr[2 * c + 1].size())
	{
		arr[c].push_back(arr[2 * c + 1][j]);
		j++;
	}
	return;
}

void build(int c, int l, int r)
{
	if (l == r)
	{
		int x;
		cin >> x;
		arr[c].push_back(x);
		return;
	}
	int mid = (r + l) / 2;
	build(2 * c, l, mid);
	build(2 * c + 1, mid + 1, r);
	merge(c, l, mid, r);
	if (c == 1)
	{
		for (int i = 0; i < arr[c].size(); i++)
		{
			cout << arr[c][i] << ' ';
		}
	}
}

int query(int c, int l, int r, int x, int y, int k)
{
	if (y < l || x > r)
	{
		return 0;
	}
	if (l >= x && r <= y)
	{

		return arr[c].size() - (upper_bound(arr[c].begin(), arr[c].end(), k) - arr[c].begin());
	}
	int mid = (r + l) / 2;
	if (y <= mid)
		return query(2 * c, l, mid, x, y, k);
	if (x > mid)
		return query(2 * c + 1, mid + 1, r, x, y, k);
	return query(2 * c, l, mid, x, y, k) + query(2 * c + 1, mid + 1, r, x, y, k);
}

int main()
{
	ios::sync_with_stdio(false);
	int n, m, x, y, k;
	cin >> n;
	build(1, 1, n);
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> x >> y >> k;
		cout << query(1, 1, n, x, y, k) << endl;
	}
	return 0;
}*/