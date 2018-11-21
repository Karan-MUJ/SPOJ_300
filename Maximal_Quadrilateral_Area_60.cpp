#include<iostream>
#include<math.h>
#include <iomanip>

using namespace std;

int main60()
{
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; i++) 
	{
		double a, b, c, d;
		cin >> a >> b >> c >> d;
		double sum = (a + b + c + d) / 2;
		double area = pow((sum - a)*(sum - b)*(sum - c)*(sum - d), .5);
		std::cout << std::fixed;
		std::cout << std::setprecision(2);
		cout << area << endl;
	}
	return 0;
}