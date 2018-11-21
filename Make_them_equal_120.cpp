#include<iostream>
#include<math.h>

using namespace std;

int main120()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		double n = 0;
		cin >> n;
		double *arr = new double[n];
		double avg = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			avg += arr[i];
		}
		avg /= n;
		if (avg == ceil(avg))
		{
			cout << n << endl;
		}
		else 
		{
			cout << n - 1 << endl;
		}
		delete arr;
	}
	return 0;
}