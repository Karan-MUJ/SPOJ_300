/*#include<iostream>
#include<vector>

using namespace std;

bool ararr[34000];
vector <int> ar1;

void ar()
{
	for (int i = 0; i < 34000; i++)
	{
		ararr[i] = true;
	}
	ararr[0] = false;
	ararr[1] = false;
	int j = 0;
	for (int i = 2; i < 34000; i++)
	{
		if (i == 3)
		{
			int xyz = 0;
		}
		if (ararr[i] == true)
		{
			int x = 0;
			for (j = i + 1; j < 34000; j++)
			{				
				if (ararr[j] == true)
					x++;
				if (x == i)
				{
					ararr[j] = false;
					x = 0;
				}
			}
		}
	}
	ar1.push_back(0);
	for (int i = 0; i < 34000; i++)
	{
		if (ararr[i] == true)
			ar1.push_back(i);
	}
}

int main()
{	
	int n;
	ar();
	while (1)
	{
		cin >> n;
		if (n == 0)
			break;
		cout << ar1[n] << endl;
	}
	return 0;
}*/