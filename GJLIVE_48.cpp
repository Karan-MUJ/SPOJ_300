#include<iostream>

using namespace std;

int main48()
{
	int n = 0, s1 = 0, sum = 0, x = 0;
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> x;
		arr[i] = x;		
		if (i != 0)
			s1 += arr[i - 1];
		sum += x;
		if (sum >= 100)
		{
			break;
		}
	}
		sum = (abs(100 - sum) <= abs(s1 - 100)) ? (sum) : (s1);
		cout << sum;
		cin >> n;	
	return 0;
}
