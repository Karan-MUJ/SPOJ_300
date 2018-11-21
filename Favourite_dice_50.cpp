#include<iostream>
#include<iomanip>

using namespace std;

int main50()
{
	double n = 0, t = 0, sum = 0;
	cin >> t;
	for (double i = 0; i < t; i++)
	{
		sum = 0;
		n = 0;
		cin >> n;
		for (double j = 1; j <= n; j++)
		{
			sum += 1 / j;
		}
		sum *= n;
		std::cout << std::fixed;
		std::cout << std::setprecision(2);
		cout << sum << endl;
		//cin >> n;
	}	
	return 0;
}