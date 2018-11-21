#include <iostream>
#include <iomanip>
using namespace std;

int main35()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i) {
		double r;
		cin >> r;

		cout << "Case " << i << ": ";
		cout << fixed << setprecision(2) << ((4 * r*r) + 0.25);
		cout << "\n";
	}

	return 0;
}