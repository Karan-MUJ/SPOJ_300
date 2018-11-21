#include<iostream>
#include<string>

using namespace std;

string arr[16];
int arr1[16];

int main131()
{
	int t = 0;
	cin >> t;	
	while (t--)
	{
		memset(arr1, 0, 16);
		memset(arr, '0', 16);
		string t1, t2;
		int a = 0, b = 0, index = 0;
		bool flag1 = 0, flag2 = 0;
		for (int i = 0; i < 16; i++) 
		{
			flag1 = 0;
			flag2 = 0;
			cin >> t1 >> t2 >> a >> b;
			if (index == 0)
			{
				arr[0] = t1;
				arr[1] = t2;
				index += 2;
			}
			for (int j = 0; j < index; j++)
			{
				if (arr[j] == t1)
				{
					if (a > b)
						arr1[j]++;
					else
						arr1[j]--;
					flag1 = 1;					
				}
				else if (arr[j] == t2)
				{
					if (a < b)
						arr1[j]++;
					else
						arr1[j]--;
					flag2 = 1;
				}
			}
			if (flag1 != 1)
			{
				if (a > b)
					arr1[index]++;
				else
					arr1[index]--;
				arr[index] = t1;
				index++;
			}
			if (flag2 != 1)
			{
				if (a < b)
					arr1[index]++;
				else
					arr1[index]--;
				arr[index] = t2;
				index++;
			}			
		}
		int maxi = 0;
		for (int i = 0; i < 16; i++)
		{
			if (arr1[i] > arr1[maxi])
				maxi = i;
		}
		cout << arr[maxi] << endl;
	}
	return 0;
}