#include<iostream>

using namespace std;

int main201()
{
	long long t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		cout << ((n*(n + 1)) / 2) / 3 << endl;
	}
	return 0;
}