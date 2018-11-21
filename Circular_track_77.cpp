/*#include<iostream>

using namespace std;

int GCD(int a, int b)
{
	if (b == 0) return a;
	return GCD(b, a%b);
}

int main77()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int a = 0, b = 0, result = 0, hcf = 0;
 		cin >> a >> b;
		if (a*b > 0)
		{
			a = abs(a);			
			b = abs(b);
			//hcf = GCD(a, b);
			a /= hcf;
			b /= hcf;
			result = abs(a - b);
		}
		else
		{
			if (a < 0)
			{				
				b = abs(b);
				a = abs(a);
				//hcf = GCD(a, b);
				a /= hcf;
				b /= hcf;
			}
			else
			{
				a = abs(a);
				b = abs(b);
				//hcf = GCD(a, b);
				a /= hcf;
				b /= hcf;
			}
			result = a + b;
		}
		cout << result << endl;
	}
	return 0;
}*/