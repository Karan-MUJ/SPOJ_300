#include<iostream>

using namespace std;

int main93()
{
	int a = -2, n = 0, x = 0;
	int arr[41], count = 40;
	cin >> n;
	while (true)
	{
		x = (n % a);
		n /= a;
		if (x < 0)
		{
			x += 2;
			n += 1;
		}		
		arr[count] = x;		
		if (n == 0)
		{
			break;
		}		
		count--;
	}
	for (count; count < 41; count++)
	{
		cout << arr[count];
	}
	return 0;
}