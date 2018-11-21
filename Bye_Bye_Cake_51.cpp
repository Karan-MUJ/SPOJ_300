/*#include<iostream>
#include<math.h>

using namespace std;

int main51()
{	
	while(1)
	{
		double n = 0, sum = 0;		
		double arr[4] = {n};
		double arr1[4];
		for (int i = 0; i < 4; i++)
		{
			cin >> n;
			arr[i] = n;
		}
		if (arr[3] == -1)
			return 0;
		for (int i = 0; i < 4; i++)
		{
			cin >> n;
			arr1[i] = n;
		}
		n = ceil(arr[0] / arr1[0]);
		for (int i = 1; i < 4; i++)
		{
			if (ceil(arr[i] / arr1[i]) > n)
				n = ceil(arr[i] / arr1[i]);
		}
		for (int i = 0; i < 4; i++)
		{
			cout << (int)((n * arr1[i]) - arr[i]) << " ";
		}
		cout << endl;
	}
	return 0;
}*/