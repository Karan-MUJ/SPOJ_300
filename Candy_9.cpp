/*#include<iostream>
#include<math.h>

using namespace std;

int main9()
{
	for(;;)
	{
		float a = 0;
		int n = 0, avg = 0, in = 0, off = 0;
		cin >> n;
		if (n == -1)
		{
			break;
		}
		int arr[10000];//= new int[n];
		//while(n != -1)
		{
			for (int i = 0; i < n; i++)
			{
				cin >> in;
				arr[i] = in;
				avg += in;
			}			
			if (avg % n != 0)
			{
				cout << "-1" << endl;
				continue;
			}
			avg /= n;
			for (int i = 0; i < n; i++)
			{
				if (arr[i] > avg)
				{
					off += arr[i] - avg;
				}
			}
			cout << off << endl;
			//cin >> a;
		}
		//delete arr;
	}
	return 0;
}*/