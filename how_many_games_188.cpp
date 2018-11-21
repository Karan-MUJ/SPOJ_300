#include <iostream>

using namespace std;

/*int GCD(int a, int b)
{
	return b == 0 ? a : GCD(b, a%b);
}*/

int main188() 
{
	ios::sync_with_stdio(false);
	int t, num, den, gcd = 1;
	char str[15];
	int counter = 0;
	cin >> t;
	while (t--)
	{
		num = 0;
		counter = 0;
		cin >> str;
		int len = strlen(str);
		for (int i = 0; i<len; ++i)
		{
			if (str[i] == '.')
				break;
			num = num * 10 + (str[i] - '0');
			counter++;
		}
		for (int i = counter + 1; i<len; ++i)
			num = num * 10 + (str[i] - '0');
		den = pow(10, len - counter - 1);
		if (counter == len)
			den = 1;
		//gcd = GCD(num, den);
		cout << den / gcd << "\n";
	}
	return 0;
}