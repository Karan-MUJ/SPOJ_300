#include<iostream>
#include<set>

using namespace std;

int main129()
{
	long long t = 0, cost = 0;
	cin >> t;
	multiset <int> s;
	multiset <int> :: iterator f, r;
	while (t--)
	{
		long long k = 0, x = 0;
		cin >> k;
		for (int i = 0; i < k; i++)
		{
			cin >> x;
			s.insert(x);
		}
		f = s.end();
		r = s.begin();
		--f;
		cost += (*f - *r);
		s.erase(f);
		s.erase(r);
	}
	cout << cost << endl;
	return 0;
}