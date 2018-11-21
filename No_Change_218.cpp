/*#include<iostream>

using namespace std;

int main218()
{
	int x, k;
	cin >> x >> k;
	int *v = new int[k];
	int i, j;
	for (i = 0; i<k; i++)
	{
		cin >> v[i];
		if (i>0)
			v[i] += v[i - 1];
	}
	bool *ans = new bool[x + 1];
	//base condition
	ans[0] = true;
	for (i = 1; i <= x; i++)
		ans[i] = false;
	for (i = 0; i<k; i++)
	{
		for (j = v[i]; j <= x; j++)
		{
			ans[j] |= ans[j - v[i]];
		}
	}
	if (ans[x])
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
	return 0;
}*/