/*#include<iostream>

using namespace std;

const int MAX = 100000;
const int MOD = 5000000;
int n, k, BIT[51][MAX], x;

int query(int* b, int idx) 
{
	int res = 0;
	while (idx >= 0) 
	{
		res += b[idx];
		if (res >= MOD) 
			res -= MOD;
		idx = (idx&(idx + 1)) - 1;
	}
	return res;
}

void update(int* b, int idx, int val) 
{
	while (idx < MAX) 
	{
		b[idx] += val;
		if (b[idx] >= MOD) 
			b[idx] -= MOD;
		idx |= idx + 1;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		update(BIT[1], x, 1);									// If we want to make a sequence of length 1 we can make it but only for elements greater than or equal to x
		for (int z = 2; z <= k; z++)
		{
			update(BIT[z], x, query(BIT[z - 1], x - 1));		// Elements less than x (For incresing subsequence) and with length z - 1
		}
	}
	cout << query(BIT[k], 99999) << endl;
	return 0;
}*/