#include <iostream>

using namespace std;

int main244()
{
	int i, j, b, c, d, e, f, n, k, ans;
	cin >> n >> k;
	while (n != 0 && k != 0)
	{
		ans = 0;
		for (i = 1; i <= n; i++)
		{
			ans = ans + k;
			ans = ans % i;
		}
		cout << n << ' ' << k << ' ' << ans + 1 << endl;
		cin >> n >> k;
	}
	return 0;
}