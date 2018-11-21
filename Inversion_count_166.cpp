/*#include<iostream>
#define sz 500000  
#define inf 1000000000  
long long a[sz + 2], L[sz + 2], R[sz + 2];
long long ic;

using namespace std;

void merge(int p, int mid, int r)
{
	int ind1 = 0, ind2 = 0, i, j, k;
	for (i = p, ind1 = 0; i <= mid; i++, ind1++)
	{
		L[ind1] = a[i];
	}
	L[ind1] = inf;
	for (j = mid + 1, ind2 = 0; j <= r; ind2++, j++)
	{
		R[ind2] = a[j];
	}
	R[ind2] = inf;
	i = j = 0;
	for (k = p; k <= r; k++)
	{
		if (L[i] > R[j])
		{
			ic += ind1 - i;
			a[k] = R[j];
			j++;
		}
		else
		{
			a[k] = L[i];
			i++;
		}
	}
}

void mergesort(int p, int r)
{
	if (p < r)
	{
		int mid = (r + p) / 2;				// As we can see the line 45 and 46 aren't doing anything or are they? Well actually they are spliting the range to help us build the tree in bottom up manner
		mergesort(p, mid);
		mergesort(mid + 1, r);
		merge(p, mid, r);
	}
}

int main166()
{
	std::ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		ic = 0;
		mergesort(0, n - 1);
		cout << ic << endl;
	}
	return 0;
}*/