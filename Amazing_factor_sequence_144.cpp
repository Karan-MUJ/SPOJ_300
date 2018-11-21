/*#include<iostream>
#include<math.h>

using namespace std;

/*long long arr[1000000] = {0, 0};
bool occur[1000001];
bool sieve[1004];

void makesieve()
{
	for (int i = 2; i < 1004; i++)
	{
		sieve[i] = true;
	}
	sieve[0] = false;
	sieve[1] = true;
	for(int i = 2; i < 502; i++)
	{
		if (sieve[i])
		{
			for (int j = 2; i*j <= 1003; j++)
			{
				sieve[i*j] = false;
			}
		}
	}
}

long long solve(int i)
{	
	int root = pow(i, .5);
	memset(occur, 0, sizeof(occur));
	int copy = i;
	long long sum = 1;
	for (int x = 2; x <= i/2; x++)
	{
		if (sieve[x])
		{			
			if ((!(i%x)) && !occur[x])
			{
				occur[x] = true;
				sum += x;
				while (!copy%x) 
				{
					copy /= x;
				}
				for (int w = 2; w*x < i; w++)
				{
					if((!(i%(w*x))) && !occur[w*x])
					{
						occur[w*x] = true;
						sum += w * x;
						//copy /= w * x;
					}
				}
			}
		}
	}
	if (copy != 1 && copy != i)
	{
		for (int x = 1; x*copy <= i; x++)
		{
			if (!(i%(x*copy)))
			{
				sum += x * copy;
			}
		}
	}
	return sum + arr[i - 1];
}*/

//int main()
//{
	/*makesieve();
	for (int i = 2; i < 1000000; i++)
	{
		arr[i] = solve(i);
	}
	int t = 0, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		cout << arr[n + 1] << endl;
	}*/
	//return 0;
//}