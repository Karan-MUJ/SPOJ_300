/*#include<iostream>
#include<math.h>

using namespace std;

int main107()
{
	int t = 0;
	cin >> t;
	while(t--)
	{
		long double n1;
		cin >> n1;
		if (n1 == 1)
		{
			cout << "poor conductor" << endl;
			continue;
		}
		long double a = ceil((n1 - 1) / 5);
		cout << (long long)a << " ";
		long long n = (long long) n1;		
			if (n % 10 == 1 || n % 10 == 2)
			{
				cout << "W L" << endl;
				continue;
			}
			if (n % 10 == 3 || n % 10 == 0)
			{
				cout << "A L" << endl;
				continue;
			}
			if (n % 10 == 4 || n % 10 == 9)
			{
				cout << "A R" << endl;
				continue;
			}
			if (n % 10 == 5 || n % 10 == 8)
			{
				cout << "M R" << endl;
				continue;
			}
			if (n % 10 == 6 || n % 10 == 7)
			{
				cout << "W R" << endl;
				continue;
			}		
	}
	return 0;
}*/