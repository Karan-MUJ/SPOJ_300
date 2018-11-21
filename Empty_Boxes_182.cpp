#include<iostream>

using namespace std;

int main182()
{
	int test, n, k, t, f;
	cin >> test;
	while (test--)
	{
		cin >> n >> k >> t >> f;
		cout << (f - n) / (k - 1) << endl;
	}
	return 0;
}