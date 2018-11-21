/*#include<iostream>
#include<algorithm>
#define mx 200009

using namespace std;

struct pos
{
	int l, r, p;
	long long int v;
};

pos a[230009];
int btree[30009];

bool cmp(pos a, pos b)
{
	if (a.v == b.v)
	{
		return a.l > b.l;
	}
	return a.v > b.v;
}

void update_it(int idx, int n)
{
	while (idx <= n)
	{
		btree[idx] += 1;
		idx += idx & (-idx);
	}
}

int read_it(int idx)
{
	int s = 0;
	while (idx > 0)
	{
		s += btree[idx];
		idx -= idx & (-idx);
	}
	return s;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	fill(btree, btree + 30009, 0);
	int n;
	cin >> n;
	int i;
	for (i = 0; i<n; i++)
	{
		cin >> a[i].v;
		a[i].l = 0;
		a[i].p = 0;
		a[i].r = i + 1;
	}
	int q;
	cin >> q;
	int ans[mx];
	for (i = n; i < n + q; i++)
	{
		cin >> a[i].l >> a[i].r >> a[i].v;
		a[i].p = i - n + 1;
	}
	sort(a, a + n + q, cmp);
	for (i = 0; i < n + q; i++)
	{
		if (a[i].l == 0)
		{
			update_it(a[i].r, n + 9);
		}
		else
		{
			ans[a[i].p] = read_it(a[i].r) - read_it(a[i].l - 1);
		}
	}
	for (i = 1; i <= q; i++)
		cout << ans[i] << endl;
	return 0;
}*/