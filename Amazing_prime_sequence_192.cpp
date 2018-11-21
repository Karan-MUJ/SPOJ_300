/*#include<iostream>
#define max 3200;

using namespace std;

unsigned long long *aps1 = new unsigned long long[10000009];
unsigned long long *aps2 = new unsigned long long[10000009];

void aps()
{
	for (int i = 0; i < 10000009; i++)
	{
		aps1[i] = 1;
	}
	aps1[0] = 0;
	aps1[1] = 0;
	aps1[2] = 1;
	for (int i = 2; i < 3200; i++)
	{
		if (aps1[i] == 1)
			for (int j = 2; i * j < 3200; j++)
			{
				if (aps1[i * j] == 1)
					aps1[i * j] = i;
			}
	}
	aps2[0] = 0;
	aps2[1] = 0;
	unsigned long long sol;
	for (int i = 2; i < 10000009; i++)
	{
		sol = (aps1[i] > 1) ? (aps1[i]) : (i);
		aps2[i] = (aps2[i - 1] + sol);
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	int t, n;
	cin >> t;
	aps();
	while (t--)
	{		
		cin >> n;		
		cout << aps2[n] << endl;
	}
	delete aps1;
	delete aps2;
	return 0;
}*/