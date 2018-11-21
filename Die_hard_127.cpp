#include<iostream>

using namespace std;

int main127()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int h, a, c = 1;
		cin >> h >> a;
		h += 3;
		a += 2;
		while (1)
		{
			if (h > 20 && a <= 10) 
			{
				h = h - 17;
				a = a + 7;
				c = c + 2; 
			}    //fire&air

			else if (h > 5 && a > 10)  
			{
				h = h - 2;
				a = a - 8;
				c = c + 2;
			}  //water&air

			else  //game ends
			{
				cout << c << endl;
				break;
			}
		}
	}
	return 0;
}