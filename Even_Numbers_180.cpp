#include<iostream>

using namespace std;

int main180()
{
	int n, k, num;
	cin >> n;
	while (cin >> n)
	{
		if (n & 1)						
			cout << n << endl;
		else
		{
			num = 0;
			k = 0;
			while (n != 0)
			{
				k = n & 1;
				num <<= 1;
				num += k;
				n = n >> 1;
			}
			cout << num << endl;
		}
	}
	return 0;
}