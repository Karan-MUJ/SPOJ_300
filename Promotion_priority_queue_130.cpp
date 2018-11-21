#include<iostream>
#include<queue>

using namespace std;

int main130()
{
	priority_queue <int> a;
	priority_queue <int> b;
	long long n = 0, cost = 0;
	cin >> n;
	while (n--)
	{
		int k = 0, x = 0;
		cin >> k;
		for (int i = 0; i < k; i++)
		{
			cin >> x;
			a.push(x);
			x *= -1;
			b.push(x);
		}
		cost += a.top() + b.top();
		a.pop();
		b.pop();
	}
	cout << cost << endl;
	return 0;
	}