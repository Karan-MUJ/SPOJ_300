#include<iostream>
#include<cstring>
#define max 10000

using namespace std;
bool intf[10000] = { 0 };

void intfm()
{
	intf[0] = 1;
	intf[1] = 1;
	for (int i = 2; i < max; i++)
	{
		if (intf[i] == false)
			for (int j = 2; i * j < max; j++)
			{
				intf[i * j] = 1;
			}
	}
}

int main232()
{
	unsigned long long n;
	intfm();
	cin >> n;
	while (n != 0)
	{
		if (n < max && intf[n] == false)
		{
			cout << n << '^' << 1 << endl;
			cin >> n;
			continue;
		}
		for (int i = 0; i * i <= n; i++)
		{
			if (intf[i] == 0)
			{
				int c = 0;
				while (!(n % i))
				{
					n /= i;
					c++;
				}
				if (c != 0)
					cout << i << '^' << c << ' ';
				if (intf[n] == false)
				{
					cout << n << '^' << '1';
					n /= n;
					break;
				}
			}
		}
		if (n != 1)
			cout << n << '^' << 1;
		cout << endl;
		cin >> n;
	}
	return 0;
}