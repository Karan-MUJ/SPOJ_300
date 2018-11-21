/*#include<iostream>

using namespace std;

int b[13], c[13], n, sz;
const int MAX = 11;
const int mod = 1000000000;

struct matrix
{
	long long X[MAX][MAX];
	matrix(){}
	void init()
	{
		memset(X, 0, sizeof(X));
		for (int i = 0; i < sz; i++)
		{
			X[i][i] = 1;
		}
	}
}aux;

void mul(matrix &m, matrix &m1, matrix &m2)
{
	memset(m.X, 0, sizeof(m.X));
	for (int i = 0; i < sz; i++)
	{
		for (int j = 0; j < sz; j++)
		{
			for (int k = 0; k < sz; k++)
			{
				m.X[i][k] = (m.X[i][k] + m1.X[i][j] * m2.X[j][k]) % mod;
			}
		}
	}
}

matrix pow(matrix &m0, int n)
{
	matrix ret;
	ret.init();
	if (n == 0)
		return ret;
	if (n == 1)
		return m0;
	matrix p = m0;
	while (n != 0)
	{
		if (n & 1)
		{
			aux = ret;
			mul(ret, aux, p);
		}
		n >>= 1;
		aux = p;
		mul(p, aux, aux);
	}
	return ret;
}

int main()
{
	int t;
	cin >> t;
	matrix m0, ret;
	while (t--)
	{
		cin >> sz;
		for (int i = 0; i < sz; i++)
		{
			cin >> b[i];
			b[i] %= mod;
		}
		for (int i = 0; i < sz; i++)
		{
			cin >> c[i];
		}
		cin >> n;
		n--;
		if (n < sz)
		{
			cout << b[n] << endl;
			continue;
		}
		else
		{
			memset(m0.X, 0, sizeof(m0.X));
			for (int i = 0; i < sz; i++)
			{
				m0.X[0][i] = c[i];
			}
			for (int i = 1; i < sz; i++)
			{
				m0.X[i][i - 1] = 1;
			}
		}
		ret = pow(m0, n - sz + 1);
		long long ans = 0;
		for (int i = 0; i < sz; i++)
		{
			ans = (ans + ret.X[0][i] * b[sz - 1 - i]) % mod;
		}
		cout << ans << endl;
	}
	return 0;
}*/