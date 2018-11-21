#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int partys(int n, int w[], int f[], int rw)
{
	if (n == 0 || rw == 0)
	{
		return 0;
	}
	else if (w[n-1] > rw)
	{
		return partys(n - 1, w, f, rw);
	}
	else
	{
		return max(f[n - 1] + partys(n - 1, w, f, rw - w[n - 1]), partys(n - 1, w, f, rw));
	}
}

int main133()
{
	
	while (true) 
	{
		int wt = 0, p = 0;
		cin >> wt >> p;
		if (wt == 0 && p == 0)
		{
			break;
		}
		int *w = new int[p];
		int *f = new int[p];
		for (int i = 0; i < p; i++)
		{
			cin >> w[i] >> f[i];
		}
		cout << partys(p, w, f, wt) << endl;
		delete w;
		delete f;
	}
	return 0;
}