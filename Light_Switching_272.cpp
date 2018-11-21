/*#include<iostream>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int tree[4194304];
int lazy[4194304];

void update(int n, int s, int e, int i, int j)
{
	if (lazy[n])
	{
		tree[n] = (e - s + 1) - tree[n];
		if (s != e)
		{
			lazy[n * 2] =! lazy[n * 2];
			lazy[n * 2 + 1] =! lazy[n * 2 + 1];
		}
		lazy[n] = 0;
	}
	if (s>e || i>e || j<s)
		return;
	if (s >= i && e <= j)
	{
		tree[n] = (e - s + 1) - tree[n];
		if (s != e)
		{
			lazy[n * 2] = !lazy[n * 2];
			lazy[n * 2 + 1] = !lazy[n * 2 + 1];
		}
		return;
	}
	update(n * 2, s, (s + e) / 2, i, j);
	update(n * 2 + 1, (s + e) / 2 + 1, e, i, j);
	tree[n] = tree[n * 2] + tree[n * 2 + 1];
}

int query(int n, int s, int e, int i, int j) 
{
	if (lazy[n])
	{
		tree[n] = (e - s + 1) - tree[n];
		if (s != e)
		{
			lazy[n * 2] = !lazy[n * 2];
			lazy[n * 2 + 1] = !lazy[n * 2 + 1];
		}
		lazy[n] = 0;
	}
	if (j < s || i > e)
		return -1;
	if (s >= i && e <= j)
	{
		return tree[n];
	}
	int mid = (s + e) / 2;
	if (j <= mid) 
	{
		return query(n * 2, s, mid, i, j);
	}
	if (i > mid) 
	{
		return query(n * 2 + 1, mid + 1, e, i, j);
	}
	return query(n * 2, s, mid, i, j) + query(n * 2 + 1, mid + 1, e, i, j);
}

int main() 
{
	int n, q;
	cin >> n >> q;
	while (q--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a)
		{
			cout << query(1, 0, n - 1, b - 1, c - 1) << endl;
		}
		else
		{
			update(1, 0, n - 1, b - 1, c - 1);
		}
	}
	return 0;
}*/