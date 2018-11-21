#include<iostream>
#include<math.h>

using namespace std;

int main124()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		long double r1, r2, r3, r = 0;
		cin >> r1 >> r2 >> r3;
		r = r1 * r2 * r3;
		r /= (r1 * r2 + r2 * r3 + r3 * r1 + 2 * pow((r * (r1 + r2 + r3)), .5));
		cout << r << endl;
	}
	return 0;
}