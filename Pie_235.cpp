/*#include<iostream>		//https://stackoverflow.com/questions/4008395/rounding-problem-with-double-type
#include<math.h>			//https://stackoverflow.com/questions/3892908/why-dont-operations-on-double-precision-values-give-expected-results
#include<iomanip>

using namespace std;
double piea[10009];

bool pie(double r, int n, int f)
{
	float c = 0;
	for (int i = 0; i < n; i++)
	{
		if (piea[i] >= r)
		{
			c += (floor)(piea[i] / r);
		}
		if (c >= f)
			return true;
	}
	return false;
}

int main235()
{
	int t, n, f;
	double pi = acos(-1.0), x, max;
	cin >> t;
	while (t--)
	{
		cin >> n >> f;
		f++;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			piea[i] = pi * x * x;
			if (i == 0)
				max = piea[i];
			else if (piea[i] > max)
				max = piea[i];
		}
		double buffer = .0000001;
		double left = 0, right = max;
		while (left < right - buffer)
		{
			double mid = (right + left) / 2;
			if (pie(mid, n, f))
			{
				left = mid;
			}
			else
			{
				right = mid - buffer;
			}
		}
		std::cout << std::fixed;
		std::cout << std::setprecision(4);
		cout << left << endl;
	}
	return 0;
}*/