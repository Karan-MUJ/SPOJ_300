#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

long long toysm[100009], toysn, toys[100009];

long long toymeth(int i)
{
	long long a = 0, b = 0, c = 0;
	if (toysm[i] != -1)
		return toysm[i];
	if (!(i + 3 < toysn))
	{
		for (int j = i; j < toysn; j++)
		{
			a += toys[j];
		}
		return toysm[i] = a;
	}
	// one
	a = toymeth(i + 2) + toys[i];
	// two
	b = toymeth(i + 4) + toys[i] + toys[i + 1];
	// three
	c = toymeth(i + 6) + toys[i] + toys[i + 1] + toys[i + 2];
	return toysm[i] = max(a, max(b, c));
}

int main221()
{
	std::ios::sync_with_stdio(false);
	int t, n;
	cin >> t;
	while (t--)
	{
		memset(toysm, -1, sizeof(toys));
		cin >> toysn;
		for(int i = 0; i < toysn; i++)
		{
			cin >> toys[i];
		}
		long long sol = toymeth(0);
		cout << sol << endl;
	}
	return 0;
}