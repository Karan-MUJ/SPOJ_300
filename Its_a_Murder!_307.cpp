/*#include<iostream>

using namespace std;

const int mx = 100009;
long long arr[mx], L[mx], R[mx], ans;

void merge(int c, int l, int mid, int r)
{
	int ind1, ind2, i, j, index;
	for (i = l, ind1 = 0; i <= mid; i++, ind1++)
	{
		L[ind1] = arr[i];
	}
	for (j = mid + 1, ind2 = 0; j <= r; j++, ind2++)
	{
		R[ind2] = arr[j];
	}
	i = j = index = 0;
	while (i < ind1 && j < ind2)
	{
		if (L[i] < R[j])
		{
			arr[l + index] = L[i];
			ans += (L[i] * (r - (mid + j)));
			index++;
			i++;
		}
		else
		{
			arr[l + index] = R[j];
			j++;
			index++;
		}
	}
	while (i < ind1)
	{
		arr[l + index] = L[i];
		i++;
		index++;
	}
	while (j < ind2)
	{
		arr[l + index] = R[j];
		j++;
		index++;
	}
}

void mergesort(int c, int l, int r)
{
	if (l < r)
	{
		int mid = (l + r) / 2;
		mergesort(2 * c, l, mid);
		mergesort(2 * c + 1, mid + 1, r);
		merge(c, l, mid, r);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	int t, n;
	cin >> t;
	while (t--)
	{
		ans = 0;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> arr[i];
		}
		mergesort(1, 1, n);
		cout << ans << endl;
	}
	return 0;
}*/