#include<iostream>

using namespace std;

int main66()
{
	long long t = 0;
	cin >> t;
	while(t--)
	{
		long long n = 0, a = 192, d = 250;
		cin >> n;
		cout << (a + (n - 1)*d) << endl;
	}
	return 0;
}