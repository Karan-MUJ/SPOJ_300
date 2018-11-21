#include<iostream>
#include<algorithm>

using namespace std;

int main157()
{
	std::ios::sync_with_stdio(false);
	int arr[101];
	for (int i = 0; i < 101; i++)
	{
		arr[i] = pow(i, 3);
	}
	int arrwii[100];
	int count = 0;
	bool status = 0;
	cout << "Cube = 6, Triple = (3,4,5)" << endl << "Cube = 12, Triple = (6,8,10)" << endl << "Cube = 18, Triple = (2,12,16)" << endl << "Cube = 18, Triple = (9,12,15)" << endl << "Cube = 19, Triple = (3,10,18)" << endl << "Cube = 20, Triple = (7,14,17)" << endl << "Cube = 24, Triple = (12,16,20)" << endl;
	for (int i = 25; i <= 100; i++)
	{
		count = 0;
		memset(arrwii, 0, sizeof(arrwii));
		for (int j = 2; arr[j] <= arr[i];j++)
		{
			for (int k = 2; (arr[k] + arr[j]) <= arr[i]; k++)
			{
				for (int l = 2; (arr[l] + arr[k] + arr[j]) <= arr[i]; l++)
				{
					if (arr[i] == (arr[j] + arr[k] + arr[l]))
					{
						//for (int x = 0; x < count; x++)
						{
							bool s1 = false, s2 = false, s3 = false;
							for (int i1 = 0; i1 < count && status != 1; i1++)
							{
								if(arrwii[3*i1] == j || arrwii[(3 * i1) + 1] == j || arrwii[(3 * i1) + 2] == j)
								{
									s1 = true;
								}
								if (arrwii[3 * i1] == k || arrwii[(3 * i1) + 1] == k || arrwii[(3 * i1) + 2] == k)
								{
									s2 = true;
								}
								if (arrwii[3 * i1] == l || arrwii[(3 * i1) + 1] == l || arrwii[(3 * i1) + 2] == l)
								{
									s3 = true;
								}
								if (s1 == 1 && s2 == 1 && s3 == 1)
								{
									status = 1;
								}
								else
								{
									s1 = 0;
									s2 = 0; 
									s3 = 0;
								}
							}
						}
						if (status != 1) 
						{
							cout << "Cube = " << i << ", Triple = (" << j << "," << k << "," << l << ")" << endl;
							arrwii[count * 3] = j;
							arrwii[(count * 3) + 1] = k;
							arrwii[(count * 3) + 2] = l;
							count++;
						}
						status = 0;
					}
				}
			}
		}
	}	
	return 0;
}