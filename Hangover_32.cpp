#include<iostream>

using namespace std;

int main32()
{
	float n; 
	{
		while (1) 
		{
			cin >> n;
			if (n == 0)
			{
				return 0;
			}
			float a = 0, b = 0, c = 0;
			for (a = 2; ; a++)
			{
				if (b >= n)
				{
					break;
				}
				b += (1 / a);
				c++;
			}
			cout << c << " card(s)" <<endl;
		}
	}
	return 0;
}