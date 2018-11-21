#include<iostream>

using namespace std;

int main117()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		long double n = 0, c = 0;
		cin >> n;
		c = sqrt(n);
		if (c == ceil(c))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
	}