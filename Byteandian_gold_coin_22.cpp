/*#include<iostream>

using namespace std;

//long long arr[1000000] = {0};

long long Bytelandian(long long n)
{
	long long arr[1000000] = { 0 }; // remove
	if (n < 1000000 && arr[n] == 0)
	{
		long long two = n / 2;
		long long three = n / 3;
		long long four = n / 4;
		long long sum = two + three + four;
		if (sum < n)
		{
			if (n < 1000000)
				arr[n] = n;
			return n;
		}
		else
		{
			sum = Bytelandian(two) + Bytelandian(three) + Bytelandian(four);
			if (arr[n] < 1000000)
				arr[n] = sum;
			return sum;
		}
		return n;
	}

	else if (n >= 1000000)
	{
		long long two = n / 2;
		long long three = n / 3;
		long long four = n / 4;
		long long sum = two + three + four;
		if (sum < n)
		{
			return n;
		}
		else
		{
			sum = Bytelandian(two) + Bytelandian(three) + Bytelandian(four);
			return sum;
		}
		return n;
	}
	else
		return arr[n];
}

int main22() //22
{
	long long arr[1000000] = { 0 };// remove
	for (int i = 0; i < 1000000; i++)
	{
		arr[i] = 0;
	}
	long long n;
	while(cin)
	{
		cin >> n;
		long long b = 0, r = 0;				
		r = Bytelandian(n);
		cout << r << endl;
	}
	return 0;
}*/