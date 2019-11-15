#include <iostream>
using namespace std;
int main()
{
	int i, j;
	int n = 7;
	int m[7] = { 3, 4, 5, 8, 5, 7, 0 };
	for (i = 0; i <= n - 2; i++)
	{
		for (j = i + 1; j <= n - 1; j++)
		{
			if (m[i] == m[j])
			{
				if (i < j)
					cout << i << " " << j;
				else
				cout << j << " " << i;
			}
		}
	}
	return 0;
}
