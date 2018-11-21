#include<iostream>

using namespace std;

/*int GCD(int a, int b)
{
	if (b == 0) return a;
	return GCD(b, a%b);
}*/

int main39() //39
{
	int t = 0, a = 0, b = 0, hcf = 0, x = 0, y = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		//hcf = GCD(b, a);
		x = b / hcf;
		y = a / hcf;
		cout << x << " " << y << endl;
	}
	return 0;
}