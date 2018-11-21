/*#include<iostream>
#include<stack>
#define mx 100009

using namespace std;

long long recthist(long long hist[], long long n)
{
	stack<int> s;
	long long max_area = 0;
	long long tp;
	long long area_with_top;
	long long i = 0;
	while (i < n)
	{
		if (s.empty() || hist[s.top()] <= hist[i])
		{
			s.push(i++);
		}
		else
		{
			tp = s.top();
			s.pop();
			area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1);
			if (area_with_top > max_area)
				max_area = area_with_top;
		}
	}
	while (!s.empty())
	{
		tp = s.top();
		s.pop();
		area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1);
		if (area_with_top > max_area)
			max_area = area_with_top;
	}
	return max_area;
}

int main240()
{
	std::ios::sync_with_stdio(false);
	long long n;
	cin >> n;
	long long arr[100009];	
	while (n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		cout << recthist(arr, n) << endl;
		cin >> n;
	}
	return 0;
}*/