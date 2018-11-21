/*#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	long t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		long god, mech, sg = 0, sm = 0, x, cm = 0, cg = 0;
		cin >> god >> mech;
		long *g = new long[god];
		long *m = new long[mech];
 		for (int j = 0; j < god; j++)
		{
			cin >> x;
			g[j] = x;
			sg += x;
		}
		for (int j = 0; j < mech; j++)
		{
			cin >> x;
			m[j] = x;
			sm += x;
		}
		sort(g, g + god);
		sort(m, m + mech);
		while(1)
		{
			if (g[cg] < m[cm])
			{				
				sg -= g[cg];
				g[cg] = 0;
				cg++;
				if (sg == 0)
				{
					cout << "MechaGodzilla" << endl;
					break;
				}
			}
			if (m[cm] <= g[cg])
			{				
				sm -= m[cm];
				m[cm] = 0;
				cm++;
				if (sm == 0)
				{
					cout << "Godzilla" << endl;
					break;
				}
			}
		}		
	}
	return 0;
}*/