/*#include<iostream>
#include<algorithm>

using namespace std;

const int mx = 400009;

struct node
{
	int max1 = 0, max2 = 0;
};

node arr[mx];

void build(int cn, int s, int e)
{
	int l = 2 * cn, r = 2 * cn + 1;
	if (s == e)
	{
		cin >> arr[cn].max1;
	}
	else
	{
		int mid = (s + e) / 2;
		build(l, s, mid);
		build(r, mid + 1, e);
	}*/
	/* I'll first compare max2 because max2 is always less than
	or equal to max1 thus if I first update using max2 and then
	max1 then I won't have to check for max2 of current node */
	/*if (arr[l].max2 >= arr[cn].max1)
	{
		arr[cn].max2 = arr[cn].max1;
		arr[cn].max1 = arr[l].max2;
	}
	if (arr[r].max2 >= arr[cn].max1)
	{
		arr[cn].max2 = arr[cn].max1;
		arr[cn].max1 = arr[r].max2;
	}
	if (arr[l].max1 >= arr[cn].max1)
	{
		arr[cn].max2 = arr[cn].max1;
		arr[cn].max1 = arr[l].max1;
	}
	if (arr[r].max1 >= arr[cn].max1)
	{
		arr[cn].max2 = arr[cn].max1;
		arr[cn].max1 = arr[r].max1;
	}	
}

node query(int cn, int l, int r, int x, int y)
{
	if (l == x && r == y)
	{
		return arr[cn];
	}
	int left = cn * 2;
	int right = cn * 2 + 1;
	int mid = l + r / 2;
	if (y <= mid)
	{
		return query(left, l, mid, x, y);
	}
	else if (x > mid)
	{
		return query(right, mid + 1, r, x, y);
	}
	else
	{
		node ls = query(left, l, mid, x, y), rs = query(right, mid + 1, r, x, y), buf;
		if (ls.max2 >= buf.max1)
		{
			buf.max2 = buf.max1;
			buf.max1 = ls.max2;
		}
		if (rs.max2 >= buf.max1)
		{
			buf.max2 = buf.max1;
			buf.max1 = rs.max2;
		}
		if (ls.max1 >= buf.max1)
		{
			buf.max2 = buf.max1;
			buf.max1 = ls.max1;
		}
		if (rs.max1 >= buf.max1)
		{
			buf.max2 = buf.max1;
			buf.max1 = rs.max1;
		}
		return buf;
	}
}

int main250()
{
	int n, q, x, y;
	char a;
	cin >> n;
	build(0, 0, n);
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> a >> x >> y;
		if (a == 'Q')
		{
			node xyz = query(0, 0, n - 1, x, y);
			cout << xyz.max1 + xyz.max2 << endl;
		}
		//else{}
	}
	return 0;
}*/