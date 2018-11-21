#include<iostream>
#include<string>

using namespace std;

int main109()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		long long n = 0, temp = 0;
		cin >> n;
		long long sum = 0;
		while (1)
		{
			long long a = n;
			sum = 0;
			temp = 0;
			while (a)
			{
				temp = a % 10;
				a /= 10;
				sum += temp;
			}
			if (n % sum == 0)
			{
				cout << n << endl;
				break;
			}
			else
				n++;
		} 	
	}
	return 0;
}