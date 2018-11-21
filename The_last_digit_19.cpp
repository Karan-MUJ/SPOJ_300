#include<iostream>

using namespace std;

int main19()
{
	int t = 0, arr[] = { 1, 1, 4, 4, 2, 1, 1, 4, 4, 2};
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int a, b, c;
		cin >> a >> b;
		if (a == 0)
		{
			cout << "0" << endl;
		}
		c = a % 10;
		for (int j = 0; j < sizeof(arr); j++)
		{
			if (b == 0)
			{
				cout << "1" << endl;
				break;
			}
			if (c == j && arr[j] != 1)
			{
				b = b % arr[j];
				a = pow(a,b);
				cout << a << endl;
				break;
			}	
			if (c == j && arr[j] == 1)
			{
				a = a % 10;
				cout << a << endl;
				break;
			}
		}
	}
	return 0;
}