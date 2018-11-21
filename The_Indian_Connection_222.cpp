#include<iostream>

using namespace std;
long long ticc, gen;
char ticsol;

void tic(int g, int k, char s)
{
	if (g == gen)
	{
		if (ticc == k)
		{
			ticsol = s;
			ticc++;
			return;
		}
		else 
		{
			ticc++;
		}
	}	
	if (s == 'm' && g < gen)
	{
		tic(g + 1, k, 'm');
		tic(g + 1, k, 'f');
	}
	else if (s == 'f' && g < gen)
	{
		tic(g + 1, k, 'f');
		tic(g + 1, k, 'm');
	}
}

int main222()
{
	int t;
	cin >> t;
	while (t--)
	{
		ticc = 1;
		gen = 0;
		long long n, k;
		cin >> gen >> k;
		tic(1, k, 'm');
		if (ticsol == 'm')
			cout << "Male" << endl;
		else
			cout << "Female" << endl;
	}
	return 0;
}