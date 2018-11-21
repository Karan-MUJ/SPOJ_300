#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>

using namespace std;

int main216()
{
	int n1 = 0, x = 0, n2 = 0, alast = 0, blast = 0;
	 vector <int> a, b, ap, bp;
	bool v[25000];
	cin >> n1;
	while (n1 != 0)
	{
		x = 0, n2 = 0, alast = 0, blast = 0;
		int alast = -5000000;
		int blast = -5000000;		
		memset(v, false, 25000);
		for (int i = 0; i < n1; i++)
		{
			cin >> x;
			v[x + 10000] = true;
			a.push_back(x);
			if (i > 0)
			{
				ap[i] = ap[i - 1] + a[i];
			}
			else
			{
				ap.resize(n1 + 10);
				ap[i] = x;
			}
		}
		cin >> n2;
		for (int i = 0; i < n2; i++)
		{
			cin >> x;
			b.push_back(x);
			if (i > 0)
			{
				bp[i] = bp[i - 1] + b[i];
			}
			else
			{
				bp.resize(n2 + 10);
				bp[i] = x;
			}
		}
		int inter = -1, sum = 0;
		for (int i = 0; i < n2; i++)
		{
			if (v[b[i] + 10000] == true)
			{				
				if (inter == -1)
				{
					inter = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
					sum += max(ap[inter], bp[i]);
					alast = ap[inter];
					blast = bp[i];
				}
				else
				{
					inter = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
					sum += max(ap[inter] - alast, bp[i] - blast);
					alast = ap[inter];
					blast = bp[i];
				}
			}
		}
		if (inter == -1)
		{
			cout << max(ap[n1 - 1], bp[n2 - 1]);
			cout << endl;
		}
		else
		{
			cout << sum + max(ap[n1 - 1] - alast, bp[n2 - 1] - blast);
			cout << endl;
		}
		cin >> n1;
		a.clear();
		b.clear();
		ap.clear();
		bp.clear();
	}
	return 0;
}