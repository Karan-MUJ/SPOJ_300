/*#include<iostream>
#include<vector>
#define max 100000

using namespace std;

int a[4 * max], L[4 * max], R[4 * max], n, ans;

void merge(int l, int mid, int r)
{
	int i = 0, j = 0, ind1 = 0, ind2 = 0;
	for (i = l, ind1 = 0; i <= mid; ind1++, i++)
	{
		L[ind1] = a[i];
	}
	for (j = mid + 1, ind2 = 0; j <= r; ind2++, j++)
	{
		R[ind2] = a[j];		
	}
	i = 0;
	j = 0;
	while (i < ind1 && j < ind2)
	{
		if (R[j] < L[i])
		{
			a[l + i + j] = R[j];
			j++;
			ans += ind1 - i;
		}
		else 
		{
			a[l + i + j] = L[i];
			i++;
		}
	}
	for (; i < ind1; i++)
	{
		a[l + i + j] = L[i];
	}
	for (; j < ind2; j++)
	{
		a[l + i + j] = R[j];
	}
}

void build(int l, int r)
{
	if (l < r) 
	{
		int mid = (l + r) / 2;
		build(l, mid);
		build(mid + 1, r);
		merge(l, mid, r);
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ans = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		build(0, n - 1);
		cout << ans << endl;
	}
	return 0;
}*/