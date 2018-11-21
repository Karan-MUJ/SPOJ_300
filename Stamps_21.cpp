#include<iostream>
#include <algorithm>
#include <functional>  

using namespace std;

int main21()//21
{
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		int need = 0, number = 0, sum = 0, count = 0, z;
		cin >> need >> number;
		int *arr = new int[number];
		
		for (int j = 0; j < number; j++)
		{
			cin >> z;
			arr[j] = z;
			sum += z;
		}
		if (need == 0)
		{
			cout << "Scenario #" << i << ":" << endl;
			cout << "0";
			continue;
		}
		if (sum < need) 
		{
			cout << "Scenario #" << i << ":" << endl;
			cout << "impossible";
			continue;
		}
		std::sort(arr, arr + number, greater<int>()); //sort(array, array+n, std::greater<int>());
		sum = 0;
		for (int j = 0; j < number; j++)
		{
			sum += arr[j];
			if (sum > need)
			{
				cout << "Scenario #" << i << ":" << endl;
				cout << (j+1) << endl;
				break;
			}			
		}
		delete arr;
		//cout << endl;
	}
	return 0;
}