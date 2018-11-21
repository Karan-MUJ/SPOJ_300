#include<iostream>

using namespace std;

int main6() 
{
	int n, sol = 0;
	while(std::cin>>n)
	{
		if (n == 0)
		{
			return 0;
		}
		sol = 0;
		for (int i = 1; i <= n; i++)
		{
			sol += i * i;
		}
		std::cout << sol << std::endl;
	}
	return 0;
}