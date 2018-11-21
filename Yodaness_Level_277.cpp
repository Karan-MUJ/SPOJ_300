/*#include<iostream>
#include<string>
#include<map>
#include<cstring>
#include<iterator>
#define max 30010
#define inf 1000000000  

using namespace std;

#define sz 500000  
#define inf 1000000000  
long long a[sz + 2], L[sz + 2], R[sz + 2], n;
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

int main()
{
	int t;
	string s;
	map <string, int> yoda;
	map <string, int> ::iterator it;
	cin >> t;
	while (t--)
	{
		ic = 0;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> s;
			yoda.insert(pair <string, int>(s, i));
		}
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			it = yoda.find(s);
			a[i] = it->second;
		}
		mergesort(0, n - 1);
		cout << ic << endl;
		yoda.clear();
	}
	return 0;
}*/