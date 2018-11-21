#include<iostream>
#include<string>

long long i = 0;

using namespace std;

/*long long parse (string s, int i)
{
	long long x = 0, y = 0, z = 0;
	while (s[i] <= '9' && s[i] >= '0')
	{
		x += s[i];
		x *= 10;
		i++;
	}
	return x;
}*/

int main72()
{
	long long t = 0;
	cin >> t;
	while (t--)
	{
		long long result = 0, x = 0;
		char a;
		cin >> result;
		while(true)
		{
			cin >> a;
			if (a == '=')
			{
				break;
			}
			else if (a == '+')
			{
				cin >> x;
				result += x;
			}
			else if (a == '*')
			{
				cin >> x;
				result *= x;
			}
			else if (a == '/')
			{
				cin >> x;
				result /= x;
			}
			else
			{
				cin >> x;
				result -= x;
			}
		}
		cout << result << endl;
	}
	return 0;
}