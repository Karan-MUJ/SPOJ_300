#include<iostream>
#include<math.h>

using namespace std;

int main194()
{
	std::ios::sync_with_stdio(false);
	int t, n, k;
	long long coeff[1010];
	long long pts[110];
	t = 1;
	while (1)
	{
		cin >> n;
		if (n < 0)
			return 0;
		for (int i = n; i >= 0; i--)
		{
			cin >> coeff[i];
		}
		cin >> k;
		for (int i = 0; i < k; i++)
		{
			cin >> pts[i];
		}
		long long sol = 0;
		cout << "Case " << t << ':' << endl;
		for (int i = 0; i < k; i++)
		{
			sol = 0;
			for (int j = n; j >= 0; j--)
			{
				sol += coeff[j] * pow(pts[i], j);
			}
			cout << sol << endl;
		}
		t++;
	}
	return 0;
}