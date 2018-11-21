#include<iostream>
#include<math.h>

using namespace std;

int main76()
{
	int n = 0;
	cin >> n;
	while (n)
	{
		int r = 0, c = 0, p = 0;
		while (n > 0)
		{
			n -= pow(2, p);
			c++;
			p++;
		}
		cout << --c << endl;
		cin >> n;
	}
	return 0;
}