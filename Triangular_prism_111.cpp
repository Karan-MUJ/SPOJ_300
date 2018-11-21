#include<iostream>
#include <iomanip>    
using namespace std;

int main111()
{
	std::ios::sync_with_stdio(false);
	int t;
	double vol, surface_area, a;
	cin >> t;
	while (t--)
	{
		cin >> vol;

		/*the value of a calculated for minimum
		Surface Area*/
		a = pow(4 * vol, 0.3333333333333333333333333);
		surface_area = 3 * a*a*sqrt(3) / 2;

		cout << std::fixed << std::setprecision(10) << surface_area << "\n";
	}
	return 0;
}