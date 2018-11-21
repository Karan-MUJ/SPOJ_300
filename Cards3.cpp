/*#include<iostream>

using namespace std;

int main03()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		long long int n = 0, sum = 0, temp = 0;
		cin >> n;
		//n %= 1000007;
		sum = (n - 1)*(1 + n - 1);
		sum /= 2;
		sum *= 3;
		sum += n * 2;
		sum %= 1000007;
		cout << sum << endl;
	}
	return 0;
}*/