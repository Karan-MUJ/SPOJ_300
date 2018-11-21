#include<iostream>

using namespace std;

int main7()
{
	int a = 0, b = 0, c = 0, sol = 0, t = 0, n = 0, arr[] = {5,25,125,625,3125,15625,78125,390625,1953125,9765625,48828125,244140625,1220703125};
	{		
		std::cin >> t;
		for (int i = 0; i < t; i++)
		{
			sol = 0;
			std::cin >> n;			
			for (int j = 0; j < sizeof(arr) && arr[j] <= n; j++)
			{
				sol += n / arr[j];
			}
			std::cout << sol << std::endl;
		}
	}
	return 0;
}