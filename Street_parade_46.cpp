#include<iostream>
#include <stack>

using namespace std;

int main46()
{
	for (;;)
	{
		int n = 0, x = 0, c = 0;
		cin >> n;
		if (n == 0)
			break;
		int *arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			arr[i] = x;
		}
		stack<int> lane;
		int need = 1;
		bool state = true;
		for (int i = 0; i < sizeof(arr); i++) 
		{
			while (!lane.empty() && lane.top() == need) 
			{
				need++;
				lane.pop();
			}
			if (arr[i] == need) 
			{
				need++;
			}
			else if (!lane.empty() && lane.top() < arr[i]) 
			{
				state = false;
				break;
			}
			else 
			{
				lane.push(arr[i]);
			}
		}
		if (state) cout << "yes" << "\n";
		else cout << "no" << "\n";
	}
	return 0;
}