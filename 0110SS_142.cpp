/*#include <iostream>
#include <cstdio>
using namespace std;
const int N = 3002;
int A[N], b[N], c[N], n, m;
void plus1()
{
	int i, j, d, e, h = 0;
	for (i = m; i >= n; i--)
	{
		c[i] = A[i] + b[i] + h;
		h = c[i] / 10;
		c[i] = c[i] % 10;

	}
	if (h != 0)
	{
		n--;
		c[n] = 1;
	}
}
void makezeroa()
{
	for (int i = n; i <= m; i++)
		A[i] = 0;
}
void makezerob()
{
	for (int i = n; i <= m; i++)
		b[i] = 0;
}
void makezeroc()
{
	for (int i = n; i <= m; i++)
		c[i] = 0;
}
void btoa()
{
	for (int i = n; i <= m; i++)
		A[i] = b[i];
}
void ctob()
{
	for (int i = n; i <= m; i++)
		b[i] = c[i];
}
int main()
{
	int i, j, d = 0, e;


	cin >> d;
	makezeroa();
	makezerob();
	makezeroc();
	m = 3000;
	n = 3000;
	if (d == 1)
		printf("%dn", 2);
	else
		if (d == 2)
			printf("%dn", 3);
		else
		{
			A[m] = 2;
			b[m] = 3;
			for (i = 1; i <= d - 2; i++)
			{
				plus1();
				btoa();
				ctob();
				makezeroc();
			}
			for (i = n; i <= m; i++)
				printf("%d", b[i]);
			printf("n");
		}
	//	}
	return 0;
}*/