/*#include<iostream>
#include<algorithm>
const int mx = 31;

using namespace std;

struct box
{
	int h, w, d;
};

int compare(const void *a, const void *b)
{
	return ((*(box *)b).d*(*(box *)b).w) - ((*(box *)a).d*(*(box *)a).w);
}

int maxStackheight(box a[], int n)
{
	box r[3 * mx];
	int index = 0, maxv;
	for (int i = 0; i < n; ++i)
	{
		r[index++] = a[i];		
		r[index].h = a[i].d;
		r[index].d = max(a[i].h, a[i].w);
		r[index++].w = min(a[i].h, a[i].w);
		r[index].h = a[i].w;
		r[index].d = max(a[i].h, a[i].d);
		r[index++].w = min(a[i].h, a[i].d);
	}
	n *= 3;
	qsort(r, n, sizeof(box), compare);
	int hmax[3 * mx];
	for (int i = 0; i < n; ++i)
		hmax[i] = r[i].h;
	for (int i = 1; i < n; ++i)
		for (int j = 0; j < i; ++j)			
			if ((r[i].w < r[j].w && r[i].d < r[j].d	|| r[j].d > r[i].w && r[j].w > r[i].d) && hmax[i] < hmax[j] + r[i].h)
				hmax[i] = hmax[j] + r[i].h;
	maxv = hmax[0];
	for (int i = 1; i<n; ++i)
		if (maxv<hmax[i])
			maxv = hmax[i];
	return maxv;
}

int main() 
{
	int n;
	cin >> n;
	while (n)
	{
		box a[mx];
		for (int i = 0; i<n; ++i)
			cin >> a[i].h >> a[i].w >> a[i].d;
		cout << maxStackheight(a, n) << endl;
		cin >> n;
	}
	return 0;
}*/