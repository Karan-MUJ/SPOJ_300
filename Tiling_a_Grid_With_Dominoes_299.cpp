/*#include<iostream>

using namespace std;

int T[50];
int h[50];
int g[50];

int main()
{

	T[1] = 1;
	T[2] = 5;
	g[1] = 1;
	g[2] = 6;
	h[1] = 2;
	h[2] = 7;

	for(int k = 3; k < 23; k++)
	{
		T[k] = T[k - 1] + T[k - 2] + g[k - 2] + 2 * h[k - 2];
		g[k] = T[k] + g[k - 2];
		h[k] = T[k] + h[k - 1];
	}

	int t, count = 1;
	cin >> t;
	while (t--)
	{
		int w;
		cin >> w;
		cout << count++ << " " << T[w] << endl;
	}
}*/