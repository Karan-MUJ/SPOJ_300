#include<iostream>

using namespace std;

/*int GCD(int a, int b)
{
	if (b == 0) return a;
	return GCD(b, a%b);
}*/

int main94()
{
	int n = 0;
	std::ios::sync_with_stdio(false);
	cin >> n;
	int *arr = new int[n];
	int *arr1 = new int[n - 1];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (i >= 1)
			arr1[i - 1] = arr[i] - arr[i - 1];
	}	
	for (int i = 1; i < n - 1; i++)
	{
		//arr1[i] = GCD(arr1[i - 1], arr1[i]);
	}
	int result = arr[n - 1] - arr[0];
	result /= arr1[n - 2];
	result -= n;
	cout << result + 1 << endl;
	delete arr;
	delete arr1;	
	return 0;
}