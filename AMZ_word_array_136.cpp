/*#include<iostream>

using namespace std;

int main()
{
	int n = 0;
	//cin >> n;
	long long arr[30], zero[31], one[31], two[31];
	zero[0] = 0;
	one[0] = 0;
	two[0] = 0;
	arr[0] = 0;
	zero[1] = 1;
	one[1] = 1;
	two[1] = 1;
	arr[1] = 3;
	for (int i = 2; i < 30; i++)
	{
		zero[i] = zero[i - 1] + one[i - 1];
		one[i] = zero[i - 1] + one[i - 1] + two[i - 1];
		two[i] = one[i - 1] + two[i - 1];
		arr[i] = zero[i] + one[i] + two[i];
	}
	while (1)
	{
		cin >> n;
		cout << arr[n] << endl;
	}
*/