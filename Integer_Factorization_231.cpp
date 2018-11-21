#include<iostream>
#define size 31622780

using namespace std;

int main231() 
{
	unsigned long long n, cnt, i;
	while (true) 
	{
		cin >> n;
		if (!n)
			break;
		cnt = 0;
		while (n % 2 == 0) 
		{
			cnt++;
			n /= 2;
		}
		if (cnt > 0)
			cout << "2^"<< cnt << ' ';
		i = 3;
		while (i*i <= n && n != 1) 
		{
			cnt = 0;
			while (n % i == 0) 
			{
				n /= i;
				cnt++;
			}
			if (cnt > 0)
				cout << i << '^' << cnt << ' ';
			i += 2;
		}
		if (n > 1)
			cout << n << '^' << 1 << ' ';
		cout << endl;
	}
	return 0;
}