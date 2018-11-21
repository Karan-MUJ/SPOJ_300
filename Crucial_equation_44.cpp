#include<iostream>

using namespace std;

/*int GCD(int a, int b)
{
	if (b == 0) return a;
	return GCD(b, a%b);
}*/

int main44()
{
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int a, b, c, x = 0;
		cin >> a >> b >> c;
		//x = GCD(a, b);
		if (c%x == 0)
		{
			cout << "Case " << i+1 << ": "<< "Yes " << endl;
			continue;
		}
		else
		{
			cout << "Case " << i + 1 << ": " << "No " << endl;
			continue;
		}
	}
	return 0;
}