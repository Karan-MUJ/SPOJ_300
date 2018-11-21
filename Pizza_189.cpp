#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>

using namespace std;

int main189()
{
	string half = "1/2", quarter = "1/4", threeq = "3/4", s;
	double hc = 0, qc = 0, tqc = 0, res = 1;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (s == half)
			hc++;
		else if (s == quarter)
			qc++;
		else
			tqc++;
	}
	qc -= tqc;
	res += tqc;
	if ((int)hc % 2 == 0)
	{
		hc /= 2;
		res += hc;
	}
	else
	{
		qc -= 2;
		hc = ceil(hc / 2);
		res += hc;
	}
	if (qc > 0)
	{
		res += ceil(qc / 4);
	}
	cout << res << endl;	
	return 0;
}