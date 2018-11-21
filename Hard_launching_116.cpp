#include <cstdio>
#include <cmath>

#define PI 3.14159265

using namespace std;

int main116()
{
	int t, ta, sp, i;
	double angle;

	for (scanf_s("%d", &t), i = 1; i <= t; i++)
	{
		scanf_s("%d%d", &ta, &sp);

		angle = asin((9.806 * ta) / (sp * sp));
		angle /= 2;
		angle *= 180.0;
		angle /= PI;

		printf("Scenario #%d: ", i);
		if (angle <= 45.000000000000)
			printf_s("%.2lf\n", angle);
		else
			printf_s("-1\n");
	}

	return 0;
}