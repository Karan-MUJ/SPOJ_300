/*#include<iostream>

using namespace std;

long long int A[1000010];

inline void cube()
{
	long long int i, temp = 0;
	for (i = 1; i <= 1000000; i++)
	{
		temp = (temp + i * i*i) % 1000000003;
		A[i] = (A[i - 1] + temp) % 1000000003;
	}
}
int main()
{
	cube();
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		cout << A[n] << endl;
	}
	return 0;
}*/