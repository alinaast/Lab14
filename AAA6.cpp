#include <iostream>
using namespace std;
int main()
{
	int i, j;
	int n = 12;
	int m[12] = { 21, 44, 5, 34, 7, 54, 2, 8, 14, 10, 3, 1 };
	int max = m[0];
	for (i = 1; i <= n - 1; i++)
	{
		if ((m[i] > m[i - 1]) && (m[i] > m[i + 1]))
		{
			max = m[i];
			j = i;
		}
	}
	if (m[n - 1] > m[n - 2])
	{
		max = m[n - 1];
		j = n - 1;
		cout << j;
	}
	else
		cout << j;
	return 0;
}