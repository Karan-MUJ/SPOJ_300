/*#include<iostream>

using namespace std;

int main()
{
	int n;
	long long t, k, ans;
	while (cin >> n)
	{
		if (n < 10)
			cout << n * n;
		else 
		{
			t = (n - 10) / 9 + 1;
			k = 10 + (t - 1) * 9;
			ans = ((81 * t) + 1) + ((n - k)*(n - k + 2));
			cout << ans << endl;
		}
	}
	return 0;
}*/