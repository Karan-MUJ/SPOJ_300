#include<iostream>

using namespace std;

int *arrnf = new int[1000009];
bool *nfp = new bool[1000009];
int *nfc = new int[1000009];
long long *nfsol = new long long[1000009];

void nf1()
{
	for (int i = 0; i < 1000009; i++)
	{
		arrnf[i] = i;
		nfp[i] = true;
		nfc[i] = 0;
	}
	nfp[0] = false;
	nfp[1] = false;
	for (int i = 0; i * i < 1000009; i++)
	{
		if (nfp[i] == true) 
		{			
			for (int j = 2; i * j < 1000009; j++)
			{
				nfp[i * j] = false;
				while (arrnf[i * j] % i == 0) 
				{
					arrnf[i * j] /= i;					
				}
				nfc[i * j]++;
			}
		}
	}
	for (int i = 1000; i < 1000009; i++)
	{
		if (arrnf[i] != 1 && arrnf[i] != i)
		{
			nfc[i]++;
		}
	}
	for (int i = 2; i < 1000009; i++)
	{
		if (nfp[i] == true)
		{
			nfc[i] = 1;
		}
	}
}

int main204()
{
	std::ios::sync_with_stdio(false);
	long long a, b, n, t, c;
	nf1();
	cin >> t;
	while (t--)
	{
		c = 0;
		cin >> a >> b >> n;
		for (int i = a; i <= b; i++)
		{
			if (nfc[i] == n)
				c++;
		}
		cout << c << endl;
	}
	delete nfp;
	delete arrnf;
	return 0;
}