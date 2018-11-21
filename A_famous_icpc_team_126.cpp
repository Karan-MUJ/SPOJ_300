/*#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int t = 1;
	int arr[4];
	long long a, b, c, d;
	while(cin >> a >> b >> c >> d)
	{
		arr[0] = a;
		arr[1] = b;
		arr[2] = c;
		arr[3] = d;
		sort(arr, arr + 4);		
		//int result = ((arr[0] + arr[3]) > (arr[1] + arr[2])) ? (arr[0] + arr[3]) : (arr[1] + arr[2]);
		cout << "Case "<< t << ": " << arr[3] + arr[2] << endl;
		t++;
	}
	return 0;
}*/