#include<iostream>
#include<iomanip>

using namespace std;

int main202()
{
	int t;
	cin >> t;
	while (t--)
	{
		std::ios::sync_with_stdio(false);
		std::cout << std::fixed << std::showpoint;
		std::cout << std::setprecision(11);
		double n, ans = 0;
		cin >> n;
		ans = 3.0 / 4.0 - 1 / (2 * (n + 1)*(n + 2));
		cout << ans << endl;
	}
	return 0;
}