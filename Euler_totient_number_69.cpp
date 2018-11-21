#include<iostream>

using namespace std;

int fi(int n) 
{
	int result = n;
	for (int i = 2; i*i <= n; i++) 
	{
		if (n % i == 0) result -= result / i;
		while (n % i == 0) n /= i;
	}
	if (n > 1) result -= result / n;
	return result;
}

int main69()
{
	int t = 0;
	cin >> t;
	while (t--) 
	{
		int n = 0;
		cin >> n;
		int z = fi(n);
		cout << z << endl;
	}
	return 0;
}