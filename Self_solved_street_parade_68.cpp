#include<iostream>
#include<stack>

using namespace std;

int main68()
{
	for (;;)
	{
		bool stat = 0;
		int need = 1, n = 0, x = 0;
		cin >> n;
		if (n == 0)
			break;
		int *arr = new int[n];
		stack <int> road;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			arr[i] = x;
		}
		for (int i = n-1; i >= 0; i--)
		{
			x = arr[i];
			road.push(x);
		}
		stack <int> sidelane;
		while(1)
		{
			if (need > n)
			{
				stat = true;
				break;
			}
			if (sidelane.empty() == 0 && sidelane.top() == need)
			{
				sidelane.pop();
				need++;
				continue;
			}
			else if (road.empty() == 0 && road.top() == need)
			{
				road.pop();
				need++;
				continue;
			}
			//else if (need == n)
			//{
				//stat = true;
				//break;
			//}
			else if (road.empty() == 1 && sidelane.top() != need)
			{
				stat = false;
				break;
			}
			else
			{
				x = road.top();
				sidelane.push(x);
				road.pop();
			}			
		}
		if (stat)
			cout << "yes" << endl;
		else
			cout << "no" << endl;		
	}
	return 0;
}