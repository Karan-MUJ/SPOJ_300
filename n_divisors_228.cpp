#include <iostream>

using namespace std;

int ndivcheck[32000];
int ndivprime[10000];

void shieve()
{
	for (int i = 3; i <= 180; i += 2)
	{
		if (!ndivcheck[i])
		{
			for (int j = i * i; j <= 32000; j += i)
				ndivcheck[j] = 1;
		}
	}
	ndivprime[0] = 2;
	int j = 1;
	for (int i = 3; i <= 32000; i += 2)
	{
		if (!ndivcheck[i]) {
			ndivprime[j++] = i;
		}
	}
}
int main228()
{
	shieve();
	int a, b, n, temp, total = 1, res = 0;
	cin >> a >> b >> n;
	int count = 0, i, j, k;
	for (i = a; i <= b; i++)
	{
		temp = i;
		total = 1;
		k = 0;
		for (j = ndivprime[k]; j*j <= temp; j = ndivprime[++k])
		{
			count = 0;
			while (temp%j == 0)
			{
				count++;
				temp /= j;
			}
			total *= count + 1;
		}
		if (temp != 1)
			total *= 2;
		if (total == n)
			res++;
	}
	cout << res << endl;
	return 0;
}