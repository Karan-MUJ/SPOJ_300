/*#include<iostream>

using namespace std;

inline int reverseit(int i)
{
	int a, sum = 0;
	while (i != 0)
	{
		a = i % 10;
		sum *= 10;
		sum += a;
		i /= 10;
	}
	return sum;
}



int main4()
{
	int n = 0, sum = 0;
	std::cin >> n;
	for (int i(0); i < n; i++)
	{
		int x, y, sum, a, b;
		std::cout << "Enter" << std::endl;
		std::cin >> x >> y;
		a = reverseit(x);
		b = reverseit(y);
		sum = a + b;
		sum = reverseit(sum);
		std::cout << sum << endl;
	}
	return 0;
}*/